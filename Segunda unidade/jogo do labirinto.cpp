#include <stdio.h>
void mensagens(int situacao_agora, int player, int passos)//ir� receber um valor inteiro que ir� mostrar a mensagem
{
	switch(situacao_agora)
	{
		case 1:
		{
			printf("Player %d pode dar: %d passos",player,passos);
			break;
		}
		case 2:
		{	printf("Player %d encontrou uma tocha!",player);
			break;
		}
		case 3:
		{	printf("Player %d perdeu 1 Health Point",player);
			break;
		}
		case 4:
		{	printf("Player %d encontrou o tesouro!",player);
			break;
		}
		case 5:
		{
			break;
		}
		case 6:
		{
			break;
		}
		case 7:
		{
			break;
		}
		case 8:
		{	printf("Player %d GANHOU!! PARAB�NS",player);
			break;
		}
	}
}
