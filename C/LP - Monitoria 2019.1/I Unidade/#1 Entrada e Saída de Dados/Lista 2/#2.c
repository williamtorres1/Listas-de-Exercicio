#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
		Fa�a um programa que receba 3 entradas correspondentes a lados de tri�ngulos e
            decida se o mesmo � is�sceles ou equil�tero.
	*/
	int L1 = 0, L2 = 0, L3 = 0;
	printf("Digite os 3 lados dos tri�ngulos: ");
	scanf("%d %d %d", &L1, &L2, &L3);
	if(L1 == L2 && L1 == L3)
        printf("Triangulo equilatero!!\n");
    if((L1 == L2 && L1 != L3) || (L1 == L3 && L1 != L2) || (L2 == L3 && != L1))
        printf("Triangulo isosceles!!\n");
	system("pause");
	return 1;
}
