/* File: inkremen.c */
/* Penulis: Fahrel Gibran Alghany */
/* Tanggal: 5 Januari 2021 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int i;

    /* Program */
    i = 3;
    printf("Nilai i : %d (i++) \n", i++);
    printf("Setelah ditambah 1 dari operasi di atas: %d \n",i);
    printf("===================\n");
    i = 3;
    printf("Nilai i : %d (++i) \n", ++i);
    printf("===================\n\n\n");
    i = 3;
    printf("Nilai i : %d (i--) \n", i--);
    printf("Setelah dikurang 1 dari operasi di atas: %d \n",i);
    printf("===================\n");
    i = 3;
    printf("Nilai i : %d (--i) \n", --i);
    return 0;
}
