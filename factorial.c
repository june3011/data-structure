#include <stdio.h>

int factorial(int c) {
	return(c == 0) ? 1 : c * factorial(c - 1);
}

int main() {
	int cnt = 0, n;
	for (cnt = 0; cnt <= 10; cnt++) {
		n = factorial(cnt);
		printf("%d != %d\n", cnt, n);
	}
}