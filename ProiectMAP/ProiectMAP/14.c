/*Se dă o matrice de dimensiunea M x N, generată aleatoriu. Se cere să se calculeze:a) Suma
elementelor aflate pe diagonala principală, respectiv pe diagonala secundară b) Minimul și
maximul elementelor aflate sub diagonala principală, respectiv sub diagonala secundară*/
#include<stdio.h>
int main()
{
	int a[20][20], i, j, m, n;
	int Suma_principala = 0, Suma_secundara = 0;
	int Min_princiapala = 32000, Max_principala = -32000;
	int Min_secundara = 32000, Max_secundara = -32000;

	printf("Valoarea lui m si n este:");
	scanf("%d", &m);
	n = m;
	printf("Matricea este:");

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	printf("Matricea:\n");
	for (i = 0; i < m; i++)
	    {for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
		}

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			if (i == j)
				Suma_principala = Suma_principala + a[i][j];
			if (i + j == m - 1)
				Suma_secundara = Suma_secundara + a[i][j];
		}

	printf("Suma de pe diagonala principala este: %d", Suma_principala);
	printf("\nSuma de pe diagonala secundara este: %d", Suma_secundara);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (i > j)
			{
				if (a[i][j] < Min_princiapala)
					Min_princiapala = a[i][j];
				if (a[i][j] > Max_principala)
					Max_principala = a[i][j];
			}

	printf("\nMinimul de sub diagonala princiapala este: %d", Min_princiapala);
	printf("\nMaximul de sub diagonala princapala este: %d", Max_principala);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (i + j > n - 1)
			{
				if (a[i][j] < Min_secundara)
					Min_secundara = a[i][j];
				if (a[i][j] > Max_secundara)
					Max_secundara = a[i][j];
			}

	printf("\nMinimul de sub diagonala secundara este: %d", Min_secundara);
	printf("\nMaximul de sub diagonala secundara este: %d", Max_secundara);
}