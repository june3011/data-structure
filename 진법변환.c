#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void changeNum(int Num, int cn) {
	if (Num < 2)
		printf("%d", Num);
	else {
		changeNum(Num / cn, cn);

		if (Num % cn < 10) {
			printf("%d", Num % cn);
		}
		else {
			printf("%c", Num % cn + 55);
		}
	}
}

int main() 
{
	int N;
	scanf("%d", &N);

	changeNum(N, 2);
	printf("(2)\n");

	changeNum(N, 8);
	printf("(8)\n");

	changeNum(N, 16);
	printf("(16)\n");

	return 0;
}