/*
 Dat je niz celih brojeva dužine N. Na programskom jeziku C napisati strukturni program koji
transformiše postojeći niz tako što će iza svaka dva elementa umetnuti njihov zbir. Broj elemenata niza i
elemente niza zadaje korisnik. Prikazati niz nakon transformacije.
Napomena: Zabranjeno je korišćenje pomoćnog niza. Ne dodavati element na kraj niza ukoliko niz
inicijalno ima neparan broj elemenata.
Primer: Ulaz: N = 6, Niz = 8 5 9 6 1 3 Izlaz: Niz = 8 5 13 9 6 15 1 3 4
*/

#include<stdio.h>

#define MAX 100
int main()
{
	int A[MAX];
	int N, i, j;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);

	for (i = 1; i < N; i += 3)
	{
		for (j = N; j > i + 1; j--)
			A[j] = A[j - 1];
		A[i + 1] = A[i - 1] + A[i];
		N++;
	}

	for (i = 0; i < N; i++)
		printf("%d ", A[i]);
}
