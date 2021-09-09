/* File: Latihan.c */
/* Penulis: Fahrel Gibran Alghany */
/* Tanggal: 7 Januari 2021 */
/* LATIHAN */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int j;
    int limit;
    scanf("%d", &limit);
    for (i=1; i<=limit; i++) {
        for (j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
