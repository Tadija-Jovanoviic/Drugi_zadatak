/*
Zadatak 2: Na programskom jeziku C napisati strukturni program koji u celobrojnom nizu A od N elemenata
iza svakog negativnog elementa umece njegovu apsolutnu vrednost. Prikazati niz nakon transformacije.
Zabranjeno je koriscenje pomocnog niza.
Primer: Ulaz: N = 5, Niz = 3 -2 7 -5 1 -> Izlaz: Niz = 3 -2 2 7 -5 5 1
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
		if (A[i] < 0)
		{
			for (j = N - 1; j > i; j--)
			{
				A[j + 1] = A[j];
			}
				A[i + 1] = A[i] * (-1);
				N++;
				i++;
		
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
	return 0;
}

