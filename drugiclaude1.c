/*
Zadatak 1: Na programskom jeziku C napisati strukturni program koji u celobrojnom nizu A od N elemenata
pronalazi sve elemente koji su veci od oba svoja suseda (lokalni maksimumi). Te elemente obrisati iz niza.
Prikazati niz nakon transformacije. Prvi i poslednji element se ne razmatraju. Zabranjeno je koriscenje pomocnog niza.
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
	for (i = 1; i < N - 1; i++)
	{
		if (A[i] > A[i - 1] && A[i] > A[i + 1])
		{
			for (j = i; j < N - 1; j++)
				A[j] = A[j + 1];
			N--;
			i--;
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
	return 0;
}