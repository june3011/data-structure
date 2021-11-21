#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n) {//소수(prime) 여부 판별 함수}
	for (int i = 2; i*i <= n; i++) //for(int i = 2; i < n; i++)
		if (!(n % i)) //if(n%i==0)
			return 0;
	return 1;
}
int main()
{
	int num = 0, cnt = 0;
	while (1) {
		cnt = 0;
		printf("숫자 : ");
		scanf("%d", &num);

		if (num >= 1000) {
			printf("\n");
			continue;
		}
		else if (num < 2)
			return 0;
		

		for (int i = 2; i < num; i++) {
			if (isPrime(i)) {
				printf("%4d ", i);
				cnt++;
			}
			if (cnt == 10) {
				printf("\n");
				cnt = 0;
			}
		}
		if (cnt == 0)
			printf("\n");
		else
			printf("\n\n");
	}
	return 0;
}