#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int select_sort(int *A, int n, int *M, int *C);
int array_input(int *A, int n);
int array_print(int *A, int n);

int* A;
int* M = 0;
int* C = 0;

void swap(int *a, int *b, int *M) {

	int temp = *a;
	*a = *b;
	*b = temp;
	*M += 3;
}

int control_summ(int *A, int n) {

	int summ = 0;
	for(int i = 0; i < n; i++) {

		summ += A[i];
	}
	return summ;
}

int control_series(int *A, int n) {

	int k = 1;
	for(int i = 0; i < n - 1; i++){

		if(A[i] <= A[i + 1]) {

			continue;
		}

		k += 1;
	}

	return k;
}

int main (){
	M = calloc(1, sizeof(int));
	C = calloc(1, sizeof(int));

	int A_lenth; // Array lenth
	printf("Array lenth: ");
	scanf("%d", &A_lenth);

	A = calloc(A_lenth, sizeof(int));

	array_input(A, A_lenth);
	printf("Start array:");
	array_print(A, A_lenth);
	printf("Control summ: %d\n", control_summ(A, A_lenth));
	printf("Series: %d\n", control_series(A, A_lenth));

	select_sort(A, A_lenth, M, C);
	printf("Sorted array:");
	array_print(A, A_lenth);
	printf("Control summ: %d\n", control_summ(A, A_lenth));
	printf("Series: %d\n", control_series(A, A_lenth));

	printf("Theory M: %d, C: %.0f\n", (3 * (A_lenth - 1)), (( pow(A_lenth, 2) - A_lenth) / 2));
	printf("My M: %d, C: %d\n", *M, *C);
	M = 0; C = 0;

	free(A);
	return 0;
}