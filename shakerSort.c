void swap(int *a, int *b, int *M);

void shaker_sort(int *A, int n, int *M, int *C) {
	int L = 0, R = n - 1, k = n - 1;
	int j;

	do {

		for(j = R; j >= L + 1; j--) {

			*C += 1;
			if(A[j] < A[j - 1]) {

				swap(&A[j], &A[j - 1], M);
				k = j;
			}
		}
		L = k;
		for(j = L; j <= R - 1; j++) {

			C += 1;
			if(A[j] > A[j + 1]) {

				swap(&A[j], &A[j + 1], M);
				k = j;
			}
		}
		R = k;

	} while(L < R);
}