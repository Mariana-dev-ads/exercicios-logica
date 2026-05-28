#include <stdio.h>
#include <math.h>  ///Obrigatorio para usar a função POW (Calcula potencia)

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double base,expoente,resultado;
	
	printf("Insira um numero : \n");
	scanf("%lf", &base);
	printf("Insira o segundo numero: \n");
	scanf("%lf", &expoente);
	
	resultado= pow(base,expoente);
	printf("Resultado : %2.f \n ", resultado);
	

	return 0;
}