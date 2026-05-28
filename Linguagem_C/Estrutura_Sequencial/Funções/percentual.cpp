#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	//declarando as funçõeds (bloco de codigo reutilizavel antes do int)
	float cal_Lucro_Distribuido(float preco_f, float perc_lucro){ 
			return preco_f * (perc_lucro / 100);  //Return o que a funçao devolve
}
	float calcular_impost(float preco_f, float perc_impo){
		return preco_f * (perc_impo / 100);
	}
	
	float calcular_preco_final( float preco_f, float lucro,float impostos){
		return preco_f + lucro + impostos;
	}
	
	
int main() {
	
	float preco_f, perc_lucro, perc_impo;
	float valor_lucro, valor_impostos, preco_final;
	
	
	printf("-----Sistema de calculo de custo de veiculos-----\n");
		
	printf("Insira o preco de fabrica R$:");
	scanf("%f",preco_f);
	
	printf("Insira a porcetagem de lucro do distribuidor (%%): ");
	scanf("%f",&perc_lucro);
	
	printf("Insira a percentual  de impostos (%%):");
	scanf("%f",&perc_impo);
	
	//chamadas das funçoes passando a receber os floats
	valor_lucro = cal_Lucro_Distribuido(preco_f, perc_lucro);
	valor_impostos = calcular_impost (preco_f , perc_impo);
   preco_final = calcular_preco_final ( preco_f, valor_lucro, valor_impostos);
	
   printf("a) valor lucro do distribuidor: R$ %.2f\n",valor_lucro);
	printf("b) valor dos impostos : R$ %.2f\n",valor_impostos);
	printf("c) preco final do veiculo: R$ %.2f\n",preco_final);
		// lembrete>float com 2 casas decimais usamos "%.2f"

	
	return 0;
}