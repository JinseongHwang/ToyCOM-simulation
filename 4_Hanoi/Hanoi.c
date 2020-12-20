#include <stdio.h>

typedef signed char T;

T subroutine(T height, T from, T tmp, T to) {
	if (height == 1) {
		printf("%d -> %d\n", from, to);
	}
	else {
		subroutine(height - 1, from, to, tmp);
		printf("%d -> %d\n", from, to);
		subroutine(height - 1, tmp, from, to);
	}
}

int main() {
	// height는 3으로 고정, 막대기는 1, 2, 3으로 3개 고정
	subroutine(3, 1, 2, 3);

	return 0;
}