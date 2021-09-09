/* File: random.c */
/* Penulis: Fahrel Gibran Alghany */
/* Tanggal: 6 Januari 2021 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    const int MIN = 1;
    const int MAX = 100;
    
    for (int i = 0; i < 5; i++) {
        printf(" %d \n", rand()%MAX+MIN);
    }

    return 0;
}
