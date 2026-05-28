#include <iostream>
#include <stdio.h>>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	 
  	   	  
	 float rendimento,total,juros,deposito,calculo;
	 printf("insira o valor do deposito : ");
	 scanf("%f",&deposito);
    printf("insira o valor da taxa de juros :");
    scanf("%f",&juros);
                                                                                    
    rendimento= deposito * (juros/100); //calculo correto :rendimento=deposito * juros/100
    total= deposito + rendimento ;
    
    printf("Rendimento: %.2f \n", rendimento);
    printf("valor total:%.2f \n",total);
    

	
	return 0;
}