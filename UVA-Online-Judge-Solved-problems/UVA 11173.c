#include<stdio.h>
#define getchar_unlocked getchar
int scan_positive_int()
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        return x;
}

int main()
{
	int t,n,k;
	t=scan_positive_int();
	while(t--)
    {
        scan_positive_int();
        k=scan_positive_int();
		printf("%d\n",k^(k>>1));
	}
	return 0;
}
