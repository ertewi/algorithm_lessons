#include <stdio.h>

void swap(int *a, int *b);

int select_sort(int* A, int n) {
	int temp, j, k = 0;

	for(int i = 0; i < n-1; i++) {

		k = i;
		for(j = i + 1; j < n; j++) {

			if(A[j] < A[k]) {

				k = j;
			}
		}

		swap(&A[i], &A[k]);
	}
	return 0;
}