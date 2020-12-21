#include <stdio.h>

typedef signed char T;

void mul(T* multiplier, T* multiplicand, T* result) {
	T R6 = 0; // tmp_iterator
	T R7 = *multiplicand; // tmp_max
	for (; R6 < R7; R6++) {
		*result += *multiplier;
	}
}

void subroutine_1(T* sum, T* iterator, T* max) {
	while (*iterator < *max) {
		(*iterator)++;
		*sum += *iterator;
	}
}

void subroutine_2(T* front, T* back, T* max, T* result) {
	while (*front < *max) {
		(*front)++;
		*back = 0;
		while (*back < *max) {
			(*back)++;
			mul(front, back, result);
			printf("%d * %d = %d\n", *front, *back, *result);
			*result = 0;
		}
	}
}

int main() {

	T R1 = 0; // sum
	T R2 = 0; // iterator
	T R3 = 10; // max

	subroutine_1(&R1, &R2, &R3);
	printf("%d\n", R1); // expected output: 55

	R2 = 1; // front
	R3 = 0; // back
	T R4 = 9; // max
	T R5 = 0; // result
	
	subroutine_2(&R2, &R3, &R4, &R5);

	return 0;
}