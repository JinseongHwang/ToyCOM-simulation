#include <stdio.h>

typedef signed char T;

T subroutine(T* arr) {
	for (T i = 2; i < 30; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
}

int main() {

	T fibo[30] = { 0,1, };

	subroutine(fibo);

	T R0 = fibo[29];

	for (T i = 0; i < 30; i++) {
		printf("%d ", fibo[i]);
	}

	return 0;
}