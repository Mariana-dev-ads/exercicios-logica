
#include <math.h>
#include <stdio.h>

/* 13) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado; = x² ; pow(número, 2) ou número ** 2)
b) o número digitado ao cubo; =  x³
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.
Insira um número: 2 Quadrado: 4 Cubo: 8 Raiz Quadrada: 1.4142135623731 Raiz Cúbica: 1.25992104989487 */

int main() {
	float num,quad,cubo,raizQ,raizC;
	printf("Digite um numero numero \n");
	scanf("%f",&num);
	
	quad = pow(num,2);
	cubo = pow(num,3);
   raizQ = sqrt(num);
	raizC = pow(num, 1.0 / 3.0);
	
	printf("Quadrada: %f. \n", quad);
	printf("Cubo: %f. \n",cubo);
	printf("Raiz Quadrada: %f. \n",raizQ);
	printf("Raiz Cubica: %f. \n ", raizC);
		return 0;
}