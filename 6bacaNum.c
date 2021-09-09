/* File: bacaNum.c */
/* Penulis: Fahrel Gibran Alghany */
/* Tanggal: 5 Januari 2021 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Kamus */
  int a;
  float x;

  /* Program */
  printf("Contoh membaca dan menulis, ketik nilai integer: ");
  scanf("%d", &a); /*  nilai a yang bertype integer perhatikan bahwa nama variabel ditulis dengan &a */
  printf("Nilai yang dibaca: %d \n", a);

  printf("Ketik nilai dari sebuah bilangan riil: ");
  scanf("%f", &x);
  printf("Nilai yang dibaca: %f \n", x);

  return 0;
}

    /* Kesimpulan */
    /* %d untuk integer, %f untuk real */
