#include <stdio.h>
#include <stdlib.h>
#include "funcao.c"

 int main (){
 int vetor [7];
  for (int i = 0; i < 7; i++){
  printf ("Digite um valor para a posicao do vetor: %d\n");
  scanf ("%d", & vetor);
  }

  printf ("Vetor em ordem decrescente:");
  for (int i = 0; i < 7 ; i++) {
  printf ("%d", vetor [i]);

  }
  return 0;
 }
