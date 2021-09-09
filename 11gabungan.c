/* File: gabungan.c */
/* Penulis: Fahrel Gibran Alghany */
/* Tanggal: 5 Januari 2021 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int uang = 6000;
    int hujan = 0; /* artinya hujan bernilai false */

    /* Program */
    printf("Uang > 5000 dan tidak hujan : %d \n", (uang>5000)&&(hujan == 0));

    uang = 6000;
    hujan = 1; /* artinya hujan bernilai TRUE */
    printf("Uang > 5000 dan tidak hujan : %d \n", (uang>5000)&&(hujan == 0));

    return 0;
}