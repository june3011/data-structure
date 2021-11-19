#include <stdio.h>
int main() {
	int arr[100], n;
	int sum=0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		sum += i;
	}
	printf("%d",sum);
	return 0;
}
