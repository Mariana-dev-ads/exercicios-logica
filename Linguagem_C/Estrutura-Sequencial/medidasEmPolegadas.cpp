#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float pe,polegada,jarda,milha;
	
	printf("Insira a medida em pes:");
	scanf("%f",&pe);
	
	polegada =(pe * 12);
	jarda =(pe / 3);
	milha= (jarda / 1760);
	
	printf("Polegadas: %f. \n",polegada);
	printf("Jardas: %f. \n",jarda);
   printf("Milhas: %f. \n ",milha);
	
	
	
	
	
	
	
	
	
	
	return 0;
}