/*
Na programskom jeziku C napisati strukturni program koji celobrojni niz A od N elemenata
transformiše na sledeći način: ukoliko je element 𝐴𝑖 veći od aritmetičke sredine (takođe ceo broj) svojih
trenutnih suseda, obrisati taj element iz niza, a ukoliko je manji, iza njega umetnuti vrednost te
aritmetičke sredine. Transformacija se vrši u jednom prolazu kroz niz, pri čemu se odluke o brisanju ili
umetanju elemenata donose isključivo na osnovu izgleda inicijalnog niza. Novoumetnuti elementi se ne
razmatraju u daljoj obradi. Korisnik unosi veličinu niza N sa standardnog ulaza, nakon čega unosi
elemente niza. Nakon izvršene transformacije, prikazati dobijeni niz na standardnom izlazu.
Napomena: Zabranjeno je korišćenje pomoćnog niza. Prvi i poslednji element niza se ne razmatraju jer
imaju samo jednog suseda
*/
#include <stdio.h>
void main() {
	int A[100], n, i, j, aritmeticka_sredina;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &A[i]);
	}
	for (i = n - 2; i >= 1; i--)
	{
		aritmeticka_sredina = (A[i - 1] + A[i + 1]) / 2;
		if (A[i] > aritmeticka_sredina) 
		{
			for (j = i; j < n - 1; j++) 
			{
				A[j] = A[j + 1];
			}
			n--;
		}
		else if (A[i] < aritmeticka_sredina) 
		{
			for (j = n; j > i + 1; j--) 
			{
				A[j] = A[j - 1];
			}
			A[i + 1] = aritmeticka_sredina;
			n++;
		}
	}
	for (i = 0; i < n; i++) 
	{
		printf("%d ", A[i]);
	}
}