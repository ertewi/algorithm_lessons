void swap(int *a, int *b, int *M);

void select_sort(int *A, int n, int *M, int *C) {
	int temp, j, k = 0;

	for(int i = 0; i < n-1; i++) {

		k = i;
		for(j = i + 1; j < n; j++) {

			*C += 1;
			if(A[j] < A[k]) {

				k = j;
			}
		}
		
		*C += 1;
		if(k != i) {

			swap(&A[i], &A[k], M);
		}
	}
}