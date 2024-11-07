
// KODE IN WORKS DAN BELUM SELESAI

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE1 1000
#define SIZE2 16000
#define SIZE3 64000

// Inisialisasi array
    int array1[SIZE1];
    int array2[SIZE2];
    int array3[SIZE3];

void generateRandomData(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 1000000; // Menghasilkan angka acak
    }
}

void bubbleSort(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Tukar array[j] dan array[j+1]
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void processArray(int *array, int size) {
    generateRandomData(array, size);
    bubbleSort(array, size);
}

int main() {
    // Seed untuk random number generator
    srand(time(NULL));

    // Proses ketiga array
    processArray(array1, SIZE1);
    processArray(array2, SIZE2);
    processArray(array3, SIZE3);

    return 0;
}