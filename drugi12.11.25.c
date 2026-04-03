/*
 Na programskoj jeziku C napisati strukturni program koji u nizu A od n elemenata određuje
da li postoji indeks i takav da je suma elemenata sa indeksima manjim od indeksa i jednaka sumi
elemenata sa indeksima većim od indeksa i. Ukoliko postoji, prekinuti sa pronalaskom i na standardnom
izlazu odštampati indeks i. Ukoliko ne postoji, odštampati -1. Korisnik sa standardnog ulaza unosi
veličinu niza n i elemente niza, respektivno.
Napomena: Smatrati da postoji maksimalno jedan takav indeks u nizu.
*/

#include<stdio.h>
#define MAX 100

int main()
{
	int A[MAX];
	int N, i, j;

	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &A[i]);
	int sumalevo = 0;
	int sumadesno = 0;

	int nadjen = 0;

	for (i = 0; i < N; i++)
	{
		sumalevo = 0;
		sumadesno = 0;
		for (j = 0; j < i; j++)
		{
			sumalevo += A[j];
		}
		for (j = i + 1; j < N; j++)
		{
			sumadesno += A[j];
		}
		if (sumalevo == sumadesno)
		{
			printf("%d", i);
			nadjen = 1;
			break;
		}
	}
	if (nadjen == 0)
		printf("%d", -1);
	return 0;
}