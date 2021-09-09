/* File: tabel2.c */
/* Penulis: Fahrel Gibran Alghany */
/* Tanggal: 5 Januari 2021 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int Tab[5];
    int i;
    /* baca is Tab */
    for (i=0; i<5; i++) {
        if (i == 0){
            printf("Input sebuah angka ke dalam tabel: \n");
        }
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%d", &Tab[i]);
    }

    /* Menuliskan isi Tab */
    for (i=0; i<5; i++) {
        if (i == 0) {
            printf("\nHasil dari inputan \n");
        }
        printf("Tab[%d] = %d; ", i, Tab[i]);
    }
    printf("\n");

    return 0;

}
