/*Se dă o matrice de dimensiunea M x N, generată aleatoriu. Se cere să se calculeze:a) Suma
elementelor aflate pe diagonala principală, respectiv pe diagonala secundară b) Minimul și
maximul elementelor aflate sub diagonala principală, respectiv sub diagonala secundară*/
#include<stdio.h>
int main()
{
	int a[20][20], i, j, m, n;
	int Suma_principala = 0, Suma_secundara = 0;
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
}