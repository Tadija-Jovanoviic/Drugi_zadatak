/*
: Na programskom jeziku C napisati strukturni program koji za dati celobrojni niz pronalazi sve
parne brojeve, računa njihovu prosečnu vrednost (kao realan broj), a potom iz niza izbacuje sve neparne
brojeve koji su veći od te prosečne vrednosti parnih brojeva. Ispisati niz nakon transformacije, pri čemu
elementi treba da budu ispisani u istom redu, razdvojeni tačno jednim blanko znakom, bez razmaka iza
poslednjeg elementa. Maksimalnu dužinu niza definisati kao konstantu MAX
*/

#include<stdio.h>
#define MAX 100
int main()
{
	int N;
	int A[MAX];
	int i;

	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &A[i]);
	int suma = 0;
	int brojac = 0;
	float prosek;

	for (i = 0; i < N; i++)
	{
		if (A[i] % 2 == 0)
		{
			suma += A[i];
			brojac++;
		}
	}
	prosek = (float)suma / brojac;

	for (i = 0; i < N; i++)
	{

		if (A[i] % 2 == 1 && A[i] > prosek)
		{

			for (int j = i; j < N - 1; j++)
			{
				A[j] = A[j + 1];
			}
			N--;
			i--;
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d", A[i]);
		if (i < N - 1)
			printf(" ");
	}
}
