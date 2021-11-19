#include <stdio.h>
int main() {
	int n;
	int a,b,c,d;
	int max=0;
	scanf("%d",&n);
	a=n%10;
	b=(n%100)/10;
	c=(n%1000)/100;
	d=(n%10000)/1000;
	
	if(max>=a)
		max=a;
	if(max>=b)
		max=b;
	if(max>=c)
		max=c;
	if(max>=d)
		max=d;
	
	printf("%d",max);
	
	return 0;
}
