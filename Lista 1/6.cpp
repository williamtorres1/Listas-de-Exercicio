#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
		Calcular a quantidade de litros de combust�vel gastos em uma viagem, utilizando-se um autom�vel que faz 15 km com um litro. 
		O c�lculo deve ser feito a partir do tempo gasto em horas e da velocidade m�dia durante a viagem em km/h. 
	*/
	float time,vm,litros,space;
	printf("Qual foi a velocidade media e o tempo gasto na viagem?\n");
	scanf("%f %f",&vm,&time);
	space=vm*time;
	litros=space/15;
	printf("Foram gastos %f litros nessa viagem\n",litros);
	system("pause");
	return 1;
}
