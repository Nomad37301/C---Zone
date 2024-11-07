// Main Program
START
    CALL displayIdentity()               // Display group identity and program details
    CALL handleMenuChoice()              // Handle user menu selection and process requests
END


// Function: handleMenuChoice   
handleMenuChoice()
    DECLARE char choice
    DO
        CALL clearScreen()
        CALL displayMenu()               // Display the main menu options
        SET choice = getValidMenuChoice() // Get a valid menu option from user

        SWITCH(choice)
            CASE '1'                      // Decimal to Binary conversion
                CALL clearScreen()
                SET num = getInputFromUser()
                CALL decimalToBinary(num)

            CASE '2'                      // Binary to Decimal conversion
                CALL clearScreen()
                CALL binaryToDecimal()

            CASE '0'                      // Exit
                PRINT "Thank you for using our program, goodbye."
                RETURN                      // Exit loop and program
    WHILE askToRestart() == 1              // Ask if user wants to restart

    PRINT "Thank you for using our program, goodbye!"

// Function: displayMenu
displayMenu()
    PRINT "================================="
    PRINT "   Binary and Decimal Converter  "
    PRINT "================================="
    PRINT "1. Convert Decimal to Binary"
    PRINT "2. Convert Binary to Decimal"
    PRINT "0. Exit"
    PRINT "================================="

// Function: getValidMenuChoice
getValidMenuChoice()
    DECLARE char input[10]
    DO
        PRINT "Input your choice (1/2/0): "
        GET input                          // Read user input as string
        REMOVE newline from input           // Trim newline from input

        IF input is "1", "2", or "0" THEN
            RETURN input[0]                // Return valid menu choice
        ELSE
            PRINT "Input not valid. Please select 1, 2, or 0."
    WHILE TRUE

// Function: clearScreen
clearScreen()
    IF OS is Windows THEN
        CALL system("cls")
    ELSE
        CALL system("clear")

// Function: bufferDelete
bufferDelete()
    WHILE getchar() is not newline or EOF // Clear buffer until newline

// Function: decimalToBinary
decimalToBinary(int n)
    DECLARE binaryNum[32], i = 0
    WHILE n > 0
        SET binaryNum[i] = n % 2
        SET n = n / 2
        INCREMENT i
    PRINT "The binary number is: "
    FOR j = i-1 TO 0
        PRINT binaryNum[j]
    PRINT newline

// Function: getInputFromUser
getInputFromUser()
    DECLARE int num, isValid
    PRINT "================================="
    PRINT "   Decimal to Binary Converter  "
    PRINT "================================="
    DO
        PRINT "Input the decimal number: "
        SET isValid = scanf("%d", &num)
        IF isValid is not 1 THEN
            CALL bufferDelete()
            PRINT "Invalid input, please input decimal numbers."
    WHILE isValid is not 1
    RETURN num

// Function: input (for binary validation)
input()
    DECLARE long long angka, char karakter
    PRINT "================================="
    PRINT "   Binary to Decimal Converter  "
    PRINT "================================="
    DO
        PRINT "Input the binary number: "
        IF scanf("%lld%c", &angka, &karakter) is not 2 or karakter is not newline THEN
            CALL bufferDelete()
            PRINT "Invalid input, please input the number 0 and 1 only."
        ELSE
            SET temp = angka
            SET valid = 1
            WHILE temp > 0
                IF temp % 10 > 1 THEN
                    SET valid = 0
                    BREAK
                SET temp = temp / 10
            IF valid THEN
                RETURN angka
            ELSE
                PRINT "Invalid input, please input the number 0 and 1 only."
    WHILE TRUE

// Function: binaryToDecimal
binaryToDecimal()
    DECLARE long long decimal = 0, rem, binary, base = 1
    SET binary = input()                   // Get valid binary input
    WHILE binary > 0
        SET rem = binary % 10
        SET decimal = decimal + (rem * base)
        SET binary = binary / 10
        SET base = base * 2
    PRINT "==============================="
    PRINT "The conversion to decimal is: ", decimal

// Function: displayIdentity
displayIdentity()
    CALL clearScreen()
    PRINT "==============================================="
    PRINT "|               MODULE 2 PROGRAM              |"
    PRINT "|          Binary and Decimal Converter       |"
    PRINT "==============================================="
    PRINT "|                  Group 18                   |"
    PRINT "|---------------------------------------------|"
    PRINT "| Member:                                     |"
    PRINT "|---------------------------------------------|"
    PRINT "|1.| Elika Putri Wicaksana                    |"
    PRINT "|  | (2405551093)                             |"
    PRINT "|---------------------------------------------|"
    PRINT "|2.| Putu Eka Darma Putra                     |"
    PRINT "|  | (2405551151)                             |"
    PRINT "|---------------------------------------------|"
    PRINT "|3.| Ni Nyoman Sri Putri Astini               |"
    PRINT "|  | (2405551173)                             |"
    PRINT "|---------------------------------------------|"
    PRINT "|4.| Anak Agung Gde Putra Purnama             |"
    PRINT "|  | (2405551172)                             |"
    PRINT "|---------------------------------------------|"
    PRINT "|5.| Kadek Satya Adi Wiryatama                |"
    PRINT "|  | (2405551013)                             |"
    PRINT "|---------------------------------------------|"
    PRINT "|6.| I Kadek Bayu Mahardika Suputra           |"
    PRINT "|  | (2405551117)                             |"
    PRINT "|---------------------------------------------|"
    PRINT "|7.| Gede Alit Devriyana                      |"
    PRINT "|  | (2405551133)                             |"
    PRINT "==============================================="
    PRINT "Press enter to continue..."
    WAIT for user input

// Function: askToRestart
askToRestart()
    DECLARE char response
    DO
        PRINT "Do you want to convert binary and decimal again? (y/n): "
        GET response
        CALL bufferDelete()
        IF response is 'y' or 'Y' THEN
            RETURN 1
        ELSE IF response is 'n' or 'N' THEN
            RETURN 0
        ELSE
            PRINT "Invalid input! Please enter 'y' or 'n'."
    WHILE TRUE
