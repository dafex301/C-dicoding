/* File: WHILEdo.c */
/* Penulis: Fahrel Gibran Alghany */
/* Tanggal: 5 Januari 2021 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int i = 0;
    int n;

    /* Algoritma */
    printf("Mengetik Hello World! sebanyak n kali. \n");
    printf("Ketikkan nilai n: ");
    scanf("%d", &n);
    while (i < n) {
        printf("Hello World!\n");
        i++;
    }

    return 0;
}
