#include <stdio.h>

int main() {

    int jumlahMahasiswa;
    int con;
    int i;

    printf("Masukkan Jumlah Mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    int nilaiMahasiswa[jumlahMahasiswa];

    for (i = 0; i < jumlahMahasiswa; i++)
    {
        printf("Masukkan nilai para mahasiswa ke %d : ", i+1);
        scanf("%d", &nilaiMahasiswa[jumlahMahasiswa]);
        con += nilaiMahasiswa[jumlahMahasiswa];
    }

    float rata_nilai;
    rata_nilai = (float)con / jumlahMahasiswa;

    printf("Nilai rata rata mahasiswa adalah = %f\n", rata_nilai);

    return 0;

}