/*
Zadatak 3: Na programskom jeziku C napisati strukturni program koji u celobrojnom nizu A od N elemenata
pronalazi najduzu sekvencu uzastopnih elemenata koji su u rastucem redosledu. Na standardnom izlazu
prikazati duzinu te sekvence i njene elemente.
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
	int trenutna_duzina = 1;
	int pocetak;
	int max_duzina = 1;
	for (i = 0; i < N - 1; i++)
	{
		if (A[i] < A[i + 1])
		{
			trenutna_duzina++;
			if (trenutna_duzina > max_duzina)
			{
				max_duzina = trenutna_duzina;
				pocetak = i - trenutna_duzina + 1;
			}
		}
		else
		{
			trenutna_duzina = 1;
		}
	}
	printf("%d\n", max_duzina);
	for (i = pocetak; i < pocetak + max_duzina; i++)
	{
		printf("%d ", A[i]);
	}
	return 0;
}

