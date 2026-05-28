#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float raio,area;
	float pi=3.14;
	printf("Insira o raio : \n");
	scanf("%f",&raio); ////atenção não esquecer o &
	
	area=(pi * raio)* raio;  ////Area= pi*base²  (PI=3,14)
	printf("Area do circulo : %.f \n",area);
	return 0;
}