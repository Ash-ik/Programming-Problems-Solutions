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
int scan_positive_int(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        if(c==EOF) {*a=0;return 0;}
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}
int main() {
	int i,p,a,b,c,d,n;
	double sin1,sin2,cos1,cos2,tsa,tsb,tca,tcb,mx, ret,f;
	while (scan_positive_int(&p) && p)
    {
        scan_positive_int(&a),scan_positive_int(&b),scan_positive_int(&c),scan_positive_int(&d),scan_positive_int(&n);
		mx = -1e+30, ret = 0;
		tsa = sin(a), tca = cos(a);
		tsb = sin(c), tcb = cos(c);
		sin1 = sin(a+b), cos1 = cos(a+b);
		cos2 = cos(c+d), sin2 = sin(c+d);
		for (i = 1; i <= n; i++) {
			f = p * (sin1 + cos2 + 2);
			ret = max(ret, mx - f);
			mx = max(mx, f);

			double t1, t2;
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
