#include <stdio.h>


   int main( ) {
	
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
	
	
	// 3. Exibicao dos resultados não pedido no exercicio
    printf("\n--- Resumo do Reajuste ---\n");
    printf("Salario Atual: R$ %.2f\n", salarioAtual);
    printf("Percentual de Aumento: %.0f%%\n", percentual * 100);
    printf("Valor do Aumento: R$ %.2f\n", aumento);
    printf("Novo Salario: R$ %.2f\n", novoSalario);
	
	
	
	return 0;
}