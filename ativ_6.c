#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[5], i, x, div; 

	while (i < 5)
	{
		scanf ("%d", &vetor[i]);
		for (x = 1; x = vetor[i]; x++)
		{
			if (x % i == 0)
			{
				div++;
			}
		}
		if (div == 2)
		{
			printf("O número %d é primo!", x);
		}
		else
		{
			printf("O número %d não é primo!", x);
		}
		i++;
	}
	
	return 0;
}
