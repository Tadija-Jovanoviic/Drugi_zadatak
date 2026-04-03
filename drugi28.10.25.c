/*
Na programskom jeziku C napisati strukturni program koji za dati celobrojni niz AN izdvaja
najdužu sekvencu (podniz) između dve nule. Prvo se unosi dužina niza, a zatim elementi niza. Na
standardnom izlazu prikazati izdvojenu sekvencu. Ukoliko ulazni niz ne sadrži dve nule, vratiti kao rezultat
maksimalni element niza. Zabranjeno je koristiti pomoćni niz.
*/

#include<stdio.h>
#define MAX 100

int main()
{
	int N, i, j;
	int A[MAX];
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &A[i]);
	int maxDuzina = 0;
	int maxPocetak;
	int p1 = -1;
	for (i = 0; i < N; i++)
	{
		if (A[i] == 0)
		{
			if (p1 == -1)
			{
				p1 = i;
			}
			else
			{
				int duzina = i - p1 - 1;
				if (duzina > maxDuzina)
				{
					maxDuzina = duzina;
					maxPocetak = p1 + 1;
				}
				p1 = i;
			}
		}
	}
	if (maxDuzina > 0)
	{
		for (i = maxPocetak; i < maxPocetak + maxDuzina; i++)
		{
			printf("%d", A[i]);
			if (i < maxPocetak + maxDuzina - 1)
				printf(" ");
		}
	}
	else
	{
		int max = A[0];
		for (i = 1; i < N; i++)
		{
			if (A[i] > max)
				max = A[i];
		}
		printf("%d", max);
	}
	return 0;
}