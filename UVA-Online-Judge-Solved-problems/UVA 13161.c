#include <stdio.h>
#include <math.h>
int solve(int a, int b, int c)
{
	return (-b+(int)(sqrt(b*b-4.0*a*c)))/2/a;
}

int main() {
	int d,r,t,age,candle;
	while(scanf("%d %d %d",&d,&r,&t)==3)
    {
		age=solve(2,2-2*d,d*d-d-18-2*(t+r));
		candle=(age+4)*(age-3)/2;
		printf("%d\n",r-candle);
	}
	return 0;
}
