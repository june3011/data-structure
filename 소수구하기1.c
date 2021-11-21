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
	for (int i = 2; i < 100000; i++)//2 3 5 7
		if (isPrime(i))
			printf("%4d ", i);
	return 0;
}