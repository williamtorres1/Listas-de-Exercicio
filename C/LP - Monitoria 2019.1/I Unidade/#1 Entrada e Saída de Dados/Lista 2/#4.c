#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
		Fa�a um programa que l� tr�s n�meros digitados pelo usu�rio. O programa deve
            apresentar os tr�s n�meros em ordem decrescente. Utilize if-else aninhados.
	*/
	int a = 0, b = 0, c = 0;
	printf("Digite tres numeros: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a > c)
	{
	    printf("%d, ", a);
	    if(b>c)
	        printf("%d  %d", b, c);
	    else printf("%d  %d", c, b);
    }
    else if(b>a && b>c)
    {
        printf("%d\, ", b);
        if(a>c)
            printf("%d \e %d", a, c);
        else
            printf("%d \e %d", c, a);
    }
    else if(c>a && c>b)
    {
        printf("%d\, ", c);
        if(a>b)
            printf("%d \e %d", a, b);
        else
            printf("%d \e %d", b, a);
    }
    return 1;
}
