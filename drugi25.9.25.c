/*
Na programskom jeziku C napisati strukturni program koji sortira niz kuglica. Niz se sastoji
od crnih (’c’) i belih (’b’) kuglica. Korisnik zadaje broj kuglica i njihov inicijalni redosled. Sortirati niz
tako da bele kuglice budu na početku niza. Prikazati niz nakon sortiranja gde je svaki element razdvojen
jednim blanko znakom. Smatrati da niz ima najviše 100 elemenata. Maksimalnu dužinu niza definisati kao
konstantu MAX. Voditi računa o optimalnosti rešenja. Smatrati da se unose isključivo ‘b’ i ‘c’, nije potrebno
dodatno proveravati.

*/


#include<stdio.h>

#define MAX 100
int main()
{
	int N, i, j;
	char A[MAX];

	printf("Unesi broj kuglica:");
	scanf_s("%d", &N);

	for (i = 0; i < N; i++)
		scanf_s(" %c", &A[i], 1);

	char temp;

	j = 0;

	for (i = 0; i < N; i++)
	{
		if (A[i] == 'b')
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			j++;
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%c ", A[i]);
	}
}