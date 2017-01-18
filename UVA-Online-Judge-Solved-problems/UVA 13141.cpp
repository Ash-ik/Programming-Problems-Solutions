#include <stdio.h>
int main()
{
    int i,n;
	unsigned long long fibo[86]={0,1,1,2,3};
	for (i=2;i<86;i++)
		fibo[i]=fibo[i-1]+fibo[i-2];
	while(scanf("%d",&n) &&n)
		printf("%llu\n",fibo[n]);
	return 0;
}
