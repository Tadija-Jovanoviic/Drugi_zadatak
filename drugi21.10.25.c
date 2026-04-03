/*
Na programskom jeziku C napisati strukturni program koji transformiše celobrojni niz AN.
Korisnik putem standardnog ulaza unosi vrednost celobrojne promenljive X, broj elemenata niza N i
elemente celobrojnog niza. Niz transformisati tako da se nakon svake sekvence uzastopnih elemenata čiji
je zbir veći od vrednosti X, u niz umetne celobrojna vrednost broja X. Novo traženje sekvence uzastopnih
elemenata počinje od prvog elementa iza umetnutog broja X. Prikazati broj elemenata u najdužoj
sekvenci, a zatim u novom redu niz nakon transformacije. Elemente niza odvojiti blanko znakom.
*/
#include<stdio.h>
#define MAX 100

int main()
{
	int N, i, j;
	int X;
	int A[MAX];
	scanf_s("%d", &X);
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &A[i]);
	int suma = 0;
	int brojac = 0;
	int maxSekvenca = 0;
	for (i = 0; i < N; i++)
	{
		suma += A[i];
		brojac++;
		if (suma > X)
		{
			if (brojac > maxSekvenca)
				maxSekvenca = brojac;

			for (j = N; j > i + 1; j--)
				A[j] = A[j - 1];
			A[i + 1] = X;
			N++;
			i++;
			suma = 0;
			brojac = 0;
		}
	}
	if (brojac > maxSekvenca)
		maxSekvenca = brojac;
	printf("%d\n", maxSekvenca);
		for (i = 0; i < N; i++)
		{
			printf("%d", A[i]);
			if (i < N - 1)
				printf(" ");
		}
	return 0;
}