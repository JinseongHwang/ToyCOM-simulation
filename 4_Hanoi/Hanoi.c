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
	// height�� 3���� ����, ������ 1, 2, 3���� 3�� ����
	subroutine(3, 1, 2, 3);

	return 0;
}