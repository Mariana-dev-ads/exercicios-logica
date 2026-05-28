#include <stdio.h>

//Declarar funçoes
   float calSalRec(float n_hr,float s_min ){  // ht_=Horas trabalhadas , s_brut=Salario bruto, s_rec= salario receber, s_min=salario minimo, n_hr= numero de horas
   	float hr_t, s_brut, imp, s_rec;
   	hr_t = s_min / 2;
   	s_brut = n_hr * hr_t;
   	imp = s_brut * 0.03;
   	s_rec = s_brut - imp;
   	return s_rec;
	}
	

int main() {
	float horas_trabalhadas, sal_Min, sal_rec;
	//Entradas de valores
	printf("Insira horas trabalhada: R$ ");
	scanf("%f", &horas_trabalhadas);
	printf("Insira valor salario minimo: R$");
	scanf("%f", &sal_Min);
   //chamo as funcoes  declaradas antes do tnnt main
	sal_rec = calSalRec(horas_trabalhadas, sal_Min);
	printf("Salario a receber: %4.f \n",sal_rec);
	
	
	
	return 0;
}