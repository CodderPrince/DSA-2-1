#include <stdio.h>
#define N 1000000007

int main()
{
	int a,b,e,f;
	int c[100050]={};
	int d[100050]={};
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b-1;i++) c[i]=1;
	c[b]=2;
	for(int i=1;i<=b-1;i++) d[i]=i;
	d[b]=b+1;
	for(int i=b+1;i<=100000;i++) {
		c[i]=(c[i-1]+c[i-b])%N;
		d[i]=(d[i-1]+c[i])%N;
	}
	while(a--) {
		scanf("%d%d",&e,&f);
		printf("%d\n",(d[f]-d[e-1]+N)%N);
	}
	return 0;
}
