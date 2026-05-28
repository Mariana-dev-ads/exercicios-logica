
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float salariobase,reajuste,desconto,bonus,receber,salbonus;
	float gratificacao= 600.00;
	float imposto= 0.10;
	
	printf("Insira o salario base : \n");
	scanf("%f",&salariobase);
	
	//bonus= salariobase + gratificacao;
   desconto= salariobase * imposto  ;
	receber= salariobase+ gratificacao - desconto;
	
	
	printf("salario a receber R$: %.2f \n",receber);
	
	
	
	
	
	
	
	return 0;
}