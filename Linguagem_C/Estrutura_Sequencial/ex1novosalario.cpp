#include <stdio.h>

/////////////////////////////////////////////EXERCICO 1 SALARIO/////////////////////////////////////////////////////////////////////////////////
int main(){
	
	float salarioAtual,novoSalario,aumento;
	float percentual=0.25;
	
	// entrada de dados
	printf(" insira o salario atual:  \n");
	scanf("%f" , &salarioAtual);
	
	//calculo de aumento e novo salario
	aumento= salarioAtual* percentual;
	novoSalario= salarioAtual + aumento;
	
	printf("Novo salario: %.2f \n", novoSalario);
	// nessa linha 16 esqueci do placeholder %f , não mostrava o resultado do novo
	//salaario . FICAR ATENTO AS REGRAS .....
	

	
	
	return 0;
}
	
