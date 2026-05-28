#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	////ESTRUTURA SEQUENCIAL – Exercício 11 – Solução

int main(){
 int seg, min, hr;
 printf("Insira o tempo em segundos:\n");
 scanf("%d", &seg);
 hr = seg / 3600;
 seg = seg % 3600;
 min = seg / 60;
 seg = seg % 60;
 printf("Horas: %d.\n", hr);
 printf("Minutos: %d.\n", min);
 printf("Segundos: %d.\n", seg);
	
	return 0;
}