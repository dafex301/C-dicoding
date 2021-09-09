/* File: Latihan.c */
/* Penulis: Fahrel Gibran Alghany */
/* Tanggal: 7 Januari 2021 */
/* LATIHAN */

#include <stdio.h>
#include <stdlib.h>

int jarak(int v, int t) {
    return (v*t);
}

int Lpersegi(int s) {
    return (s*s);
}

int main()
{
    int s;
    printf("Menghitung luas persegi\n\n"); 
    printf("Masukkan sisi persegi: ");
    scanf("%d", &s);
    printf("Luas persegi adalah %d", Lpersegi(s));


    return 0;
}
