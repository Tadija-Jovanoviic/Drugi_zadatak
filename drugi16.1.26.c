/*
Na programskom jeziku C napisati strukturni program koji u nizu A od N elemenata iz skupa
prirodnih brojeva nalazi dva najmanja elementa X1 i X2(X1 < X2) i dva najveća elementa Y1 i Y2(Y1 ≤ Y2).
Nakon pronalaska ovih elemenata, na poziciju sa indeksom X1 umetnuti u niz još jedan element sa
vrednošću Y1, a na poziciju sa indeksom X2 umetnuti još jedan element sa vrednošću Y2.
Napomena: Smatrati da su X1 i X2 uvek različiti i manji od N.
*/
#include <stdio.h>
int main() {
	int N, A[100], i, X1, X2, Y1, Y2;
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &A[i]);
	if (A[0] < A[1]) 
	{
		X1 = A[0]; X2 = A[1];
		Y1 = A[0]; Y2 = A[1];
	}
	else 
	{
		X1 = A[1]; X2 = A[0];
		Y1 = A[1]; Y2 = A[0];
	}
	for (i = 2; i < N; i++)
	{
		if (A[i] < X1) {
			X2 = X1;
			X1 = A[i];
		}
		else if (A[i] < X2) {
			X2 = A[i];
		}

		if (A[i] >= Y2) {
			Y1 = Y2;
			Y2 = A[i];
		}
		else if (A[i] > Y1) {
			Y1 = A[i];
		}
	}
	for (i = N; i > X1; i--) {
		A[i] = A[i - 1];
	}
	A[X1] = Y1;
	N = N + 1;
	for (i = N; i > X2; i--) {
		A[i] = A[i - 1];
	}
	A[X2] = Y2;
	N = N + 1;
	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	return 0;
}