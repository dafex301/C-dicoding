/* File: IF1.c */
/* Penulis: Fahrel Gibran Alghany */
/* Tanggal: 5 Januari 2021 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int a;

    /* Program */
    printf("Contoh IF satu kasus \n");
    printf("Ketikkan suatu nilai integer ");
    scanf("%d", &a);
    if (a >= 5) {
        printf("Nilai %d lebih dari 5\n", a);
    } else {
    printf("Bilangan kurang dari 5");
    }

    return 0;
}
