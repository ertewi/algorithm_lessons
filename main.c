#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void select_sort(int *A, int n, int *M, int *C);
void bubble_sort(int *A, int n, int *M, int *C);
void shaker_sort(int *A, int n, int *M, int *C);
void array_input(int *A, int n);
void array_random(int *A, int n);
void array_descending(int *A, int n);
void array_growing(int *A, int n);
void array_print(int *A, int n);

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

	printf("------------------------------------------------------");
	printf("\n");



//SELECT SORT

	// array_input(A, A_lenth);
	// printf("Start array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// select_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M: %d, C: %.0f\n", (3 * (A_lenth - 1)), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// M = 0; C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");
	


	// array_random(A, A_lenth);
	// printf("Random array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// select_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M: %d, C: %.0f\n", (3 * (A_lenth - 1)), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// *M = 0; *C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");



	// array_descending(A, A_lenth);
	// printf("Descending array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// select_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M: %d, C: %.0f\n", (3 * (A_lenth - 1)), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// *M = 0; *C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");



	// array_growing(A, A_lenth);
	// printf("Growing array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// select_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M: %d, C: %.0f\n", (3 * (A_lenth - 1)), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// *M = 0; *C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");



//BUBBLE SORT

	// array_input(A, A_lenth);
	// printf("Start array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// bubble_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M-min: 0, M-max: %.0f, C: %.0f\n", (3 * ( pow(A_lenth, 2) - A_lenth) / 2), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// *M = 0; *C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");



	// array_random(A, A_lenth);
	// printf("Random array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// bubble_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M-min: 0, M-max: %.0f, C: %.0f\n", (3 * ( pow(A_lenth, 2) - A_lenth) / 2), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// *M = 0; *C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");



	// array_descending(A, A_lenth);
	// printf("Descending array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// bubble_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M-min: 0, M-max: %.0f, C: %.0f\n", (3 * ( pow(A_lenth, 2) - A_lenth) / 2), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// *M = 0; *C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");



	// array_growing(A, A_lenth);
	// printf("Growing array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// bubble_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M-min: 0, M-max: %.0f, C: %.0f\n", (3 * ( pow(A_lenth, 2) - A_lenth) / 2), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// *M = 0; *C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");



// SHAKER SORT

	// array_input(A, A_lenth);
	// printf("Input array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// shaker_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M-mid: %.0f, C-min: %d, C-max: %.0f\n", (pow(A_lenth, 2)), (A_lenth - 1), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// *M = 0; *C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");



	// array_random(A, A_lenth);
	// printf("Random array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// shaker_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M-mid: %.0f, C-min: %d, C-max: %.0f\n", (pow(A_lenth, 2)), (A_lenth - 1), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// *M = 0; *C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");



	// array_descending(A, A_lenth);
	// printf("Descending array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// shaker_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M-mid: %.0f, C-min: %d, C-max: %.0f\n", (pow(A_lenth, 2)), (A_lenth - 1), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// *M = 0; *C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");



	// array_growing(A, A_lenth);
	// printf("Growing array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// shaker_sort(A, A_lenth, M, C);
	// printf("Sorted array:");
	// array_print(A, A_lenth);
	// printf("Control summ: %d\n", control_summ(A, A_lenth));
	// printf("Series: %d\n", control_series(A, A_lenth));
	// printf("\n");

	// printf("Theory M-mid: %.0f, C-min: %d, C-max: %.0f\n", (pow(A_lenth, 2)), (A_lenth - 1), (( pow(A_lenth, 2) - A_lenth) / 2));
	// printf("My M: %d, C: %d\n", *M, *C);
	// *M = 0; *C = 0;
	// printf("\n");
	// printf("------------------------------------------------------");
	// printf("\n");




	free(A); free(M); free(C);
	return 0;
}