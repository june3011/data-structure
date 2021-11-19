#include <stdio.h>
int main() {
	int N;
	int cnt=0;
	
	scanf("%d", &N);
	
	cnt = 16*60*2*(N+1);
	if(N>=3)
		cnt+=3600;
	
	printf("%d",cnt);
	
	return 0;
}
