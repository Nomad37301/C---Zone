#include <stdio.h>

int main(){ 

    int panjang, lebar, tinggi, volume;
   

    printf("Masukan panjang : ");
    scanf("%d", &panjang);

    printf("Masukan lebar : ");
    scanf("%d", &lebar);

    printf("Masukan tinggi : ");
    scanf("%d", &tinggi);

    volume = panjang * tinggi * lebar;

    printf("Volume balok adalah : %d\n", volume);

    return 0;
}