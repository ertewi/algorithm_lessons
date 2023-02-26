#include <stdio.h>
void swap(int *a, int *b, int *M);

void bubble_sort(int *A, int n, int *M, int *C) {
	int j;

	for(int i = 0; i <= n - 2; i++) {

		for(j = n - 1; j >= i + 1; j--) {

			*C += 1;
			if(A[j] < A[j - 1]) {

				swap(&A[j], &A[j - 1], M);
			}
		}
	}
}