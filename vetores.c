#include <stdio.h>
#include <stdlib.h>

int main (){
	int vetor [10];
	int i;

printf ("Digite um valor para a posição do vetor\n");
for (i = 0; i < 10; i++){
scanf ("%d", &vetor[i]);
vetor [i]*=2;
}

printf ("Resultados\n");
for (i = 0; i < 10 ;i++){
printf("posição %d: %d\n", i ,vetor[i]);
}

return 0; 
}




