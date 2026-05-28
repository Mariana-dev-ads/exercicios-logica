#include<stdio.h>

int main(){
	
	float salariobase,novosalario,aumento,salarioreceber,desconto;
	float bonus= 0.05;
	float impostos= 0.07;
	
	printf(" Insira o salario base : \n");
	scanf("%f" ,&salariobase);
	

	  
    aumento = salariobase * bonus;
    novosalario = salariobase + aumento;
    desconto= salariobase * impostos ;
    salarioreceber= salariobase + aumento - desconto;
    
    //7-novosalario
    
    printf("salario + bonus R$: %2.f \n", novosalario,);
    printf("Imposto sobre o salario R$: %2.f \n", desconto);
    printf("Salario a receber R$: %2.f \n", salarioreceber);
	return 0;
}