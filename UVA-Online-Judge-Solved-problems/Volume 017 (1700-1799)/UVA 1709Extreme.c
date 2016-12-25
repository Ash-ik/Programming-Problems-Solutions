#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#define read freopen("dataN.txt","r",stdin)
#define write freopen("dataOUT.txt","w",stdout)
double max(double a,double b)
{
    if(a>b) return a;
    return b;
}
int main() {
    char in[100];
	int i,p,a,b,c,d,n;
	double sin1,sin2,cos1,cos2,tsa,tsb,tca,tcb,mx, ret,f,t1,t2;
	while(gets(in))
    {
        sscanf(in,"%d %d %d %d %d %d",&p,&a,&b,&c,&d,&n);
		mx = -1e+30, ret = 0;
		tsa = sin(a), tca = cos(a);
		tsb = sin(c), tcb = cos(c);
		sin1 = sin(a+b), cos1 = cos(a+b);
		cos2 = cos(c+d), sin2 = sin(c+d);
		for (i = 1; i <= n; i++) {
			f = p * (sin1 + cos2 + 2);
			ret = max(ret, mx - f);
			mx = max(mx, f);

			t1 = sin1 * tca + cos1 * tsa;
			t2 = cos1 * tca - sin1 * tsa;
			sin1 = t1, cos1 = t2;

			t1 = sin2 * tcb + cos2 * tsb;
			t2 = cos2 * tcb - sin2 * tsb;
			sin2 = t1, cos2 = t2;
		}
		printf("%.8lf\n",ret);
    }
	return 0;
}
