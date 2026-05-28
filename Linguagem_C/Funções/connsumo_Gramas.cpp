#include <stdio.h>

  float cal_Escada( float altura, float degrau){
  	//conversao
  	 float t_Degraus= (altura * 100) /degrau;
      
      return t_Degraus;
  }
 


int main() {
	float altura,degrau,quantD;
	
	printf("Insira a altura de cada degrau em cm ?");
	scanf("%f",&degrau);
	printf("Insira a altura da escada:");
	scanf("%f",&altura);
	
	quantD = cal_Escada (altura , degrau); 
	
	printf("Numeros de degraus: %f.",quantD);
	
	
	
	return 0;
}