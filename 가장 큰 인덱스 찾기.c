#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, d[110];

int f()
{
	int max = 0;
	int a = 0;
	for (int i = 0; i < n; i++) {
		if (max < d[i]) {
			max = d[i];
			a = i + 1;
		}
	}
	return a;
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	printf("%d", f());

	return 0;
}