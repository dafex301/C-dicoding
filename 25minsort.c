/* File: minsort.c */
/* Penulis: Fahrel Gibran Alghany */
/* Tanggal: 5 Januari 2021 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int Tab[10] = {1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100};
    int i;
    int min;
    int temp, k;
    /* Algoritma */
    for (i=0; i<9; i++) {
        min = i;
        for (k=i+1; k<10; k++) {
            if (Tab[k] < Tab[min]) {
                min = k;
            }
        }
        temp = Tab[i];
        Tab[i] = Tab[min];
        Tab[min] = temp;
    }

    for (i=0; i<10; i++) {
        printf("%d; ",Tab[i]);
    }

    return 0;

}
