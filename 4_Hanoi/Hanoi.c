#include <stdio.h>

typedef signed char T;

T subroutine(T height, T from, T tmp, T to) {
	if (height == 1) {
		printf("%c -> %c\n", from, to);
	}
	else {
		subroutine(height - 1, from, to, tmp);
		printf("%c -> %c\n", from, to);
		subroutine(height - 1, tmp, from, to);
	}
}

int main() {
	// height는 3으로 고정, 막대기는 A, B, C로 3개 고정
	subroutine(3, 'A', 'B', 'C');

	return 0;
}