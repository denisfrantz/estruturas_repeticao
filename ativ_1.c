#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, x, y, soma, dobro;
	
	printf("NUMEROS PERFEITOS\n=================");
	printf("\n\nInforme um numero inteiro: ");
	scanf("%d", &num);
	system("cls");
	printf("Numeros perfeitos menores que %d: \n", num);
	dobro = (num * 2);
	
	for (x = 1; x < num; x++)
	{
		soma = 0;
		for (y = 1; y < x; y++)
		{
			if (x%y == 0)
			{
				soma = soma + y;
			} 
		}
		soma = soma + x;
		if (soma == 2 * x)
		{
			printf ("\n%d", x);
		}
	}
	printf ("\n\nATENCAO! Um numero inteiro e dito perfeito se o dobro dele e igual a soma de todos os seus divisores.\n");
	printf ("\n\nFim do programa!");
	
	return 0;
}
