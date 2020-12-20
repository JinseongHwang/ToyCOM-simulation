#include <stdio.h>

typedef signed char T;

T subroutine_1() {
	T sum = 0;
	for (T i = 1; i <= 10; i++) {
		sum += i;
	}
	return sum;
}

void subroutine_2(T* front, T* back, T* max, T* result) {
	for (; *front <= *max; (*front)++) {
		for (*back = 1; *back <= *max; (*back)++) {
			*result = (*front) * (*back);
			printf("%d * %d = %d\n", *front, *back, *result);
		}
	}
}

int main() {

	T R1 = subroutine_1();

	T R2 = 2;
	T R3 = 1;
	T R4 = 9;
	T R5 = 0;
	subroutine_2(&R2, &R3, &R4, &R5);

	return 0;
}