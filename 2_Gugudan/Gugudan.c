#include <stdio.h>

typedef signed char T;

T subroutine() {
	T sum = 0;
	for (T i = 1; i <= 10; i++) {
		sum += i;
	}
	return sum;
}

int main() {

	T R1 = subroutine();

	T currentValue = 0;
	for (T N = 2; N <= 9; N++) {
		for (T M = 1; M <= 9; M++) {
			currentValue = N * M;
			printf("%d * %d = %d\n", N, M, currentValue);
		}
	}

	return 0;
}