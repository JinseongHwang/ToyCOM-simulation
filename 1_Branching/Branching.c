#include <stdio.h>

typedef signed char T;

void subroutine(T* p_C, T result) {
	if (result > 0) {
		(*p_C)++;
	}
	else { // result <= 0
		(*p_C)--;
	}
}

int main() {

	T A = 13;
	T B = 16;
	T C = 1;

	subroutine(&C, A - B);

	A = 21;

	subroutine(&C, A - B);

	return 0;
}