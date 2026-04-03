/*
Na programskom jeziku C napisati strukturni program koji u datom nizu AN celih brojeva
detektuje promenu smera kretanja vrednosti elemenata. Promena smera se javlja u trenutku kada niz
prestaje da raste i počinje da opada, ili obrnuto - kada posle opadanja ponovo počinje da raste. Kada dođe
do takve promene, u niz treba ubaciti nulu odmah iza elementa kod koga je došlo do promene.
Maksimalnu dužinu niza definisati kao konstantu MAX. Na standardnom izlazu prikazati niz AN nakon
transformacije. Elemente niza razdvojiti tačno jednim blanko znakom.
Primer: Ulaz: N = 8, A8 = 1 3 5 4 3 2 3 7
 Izlaz: A10 = 1 3 5 0 4 3 2 0 3 7
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

	for (i = 1; i < N - 1; i++)
	{
		if ((A[i - 1] < A[i] && A[i] > A[i + 1] || A[i - 1] > A[i] && A[i] < A[i + 1]))
		{
			for (j = N; j > i + 1; j--)
			{
				A[j] = A[j - 1];
			}
			A[i + 1] = 0;
			N++;
			i++;
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d", A[i]);
		if (i < N - 1)
			printf(" ");
	}
		return 0;

}