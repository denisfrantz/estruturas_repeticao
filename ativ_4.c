#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, fatorial;
	printf ("CALCULO DE FATORIAL\n===================");
	printf ("\n\nInforme um numero: ");
	scanf ("%d", &num);
	system("cls");
	printf ("%d! = ", num);

	for (fatorial = 1; num > 1; num--)
	{
		fatorial = fatorial * num;	
	}
	printf ("%d", fatorial);
	printf ("\n\nFim do programa!");
	
	return 0;
}
