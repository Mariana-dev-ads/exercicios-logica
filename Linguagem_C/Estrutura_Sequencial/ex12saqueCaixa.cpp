#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
////ESTRUTURA SEQUENCIAL – Exercício 11 – Solução
int main(int argc, char** argv) {
	
	int cem,ciquenta,vinte,dez,cinco,dois,saque;
	printf("insira um valor a sacar : \n ");
	scanf("%d",&saque);
	
	cem= saque / 100 ;
	saque= saque % 100; //% achar o resto da divisão do valor 
	ciquenta= saque / 50;
	saque= saque % 50;
	vinte= saque / 20;
	saque= saque % 20;
	dez= saque / 10;
	saque= saque % 10;	
	cinco= saque / 5;
	saque= saque % 5;
	dois= saque / 2;
	saque= saque % 2;
	
	printf(" nº Numeros de notas  R$ 100: %d. \n",cem);	
	printf(" nº Numeros de notas  R$ 50: %d. \n",ciquenta);	
	printf(" nº Numeros de notas  R$ 20: %d. \n",vinte);	
	printf(" nº Numeros de notas  R$ 10: %d. \n",dez);	
	printf(" nº Numeros de notas  R$ 5: %d. \n",cinco);	
	printf(" nº Numeros de notas  R$ 2: %d. \n",dois);	
	 
	return 0;
}