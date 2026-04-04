/*
Zadatak 4: Na programskom jeziku C napisati strukturni program koji u celobrojnom nizu A od N elemenata
zamenjuje svaki element koji je deljiv sa 3 sa aritmetickom sredinom njegovih suseda (celobrojno).
Prvi i poslednji element se ne razmatraju. Prikazati niz pre i posle transformacije.
*/

#include <stdio.h>

int main()
{
	int A[100], N, i, j;
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}
	for (i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	int aritmeticka_sredina;
	for (i = 1; i < N - 1; i++)
	{
		if (A[i] % 3 == 0)
		{
			A[i] = (A[i - 1] + A[i + 1]) / 2;
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
	return 0;
}