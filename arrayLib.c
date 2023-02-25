#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_input(int *A, int n) {

	printf("Enter array of %d numbers:\n", n);
	for(int i = 0; i < n; i++) {

		scanf("%d", &A[i]);
	}
}

void array_print(int *A, int n) {

	for(int i = 0; i < n; i++) {

		printf(" %d", A[i]);
	}
	printf("\n");
}

void array_random(int *A, int n) {
	srand(time(NULL));
	for(int i = 0; i < n; i++) {

		A[i] = rand() % 99;
	}
}