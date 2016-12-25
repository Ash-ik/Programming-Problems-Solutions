#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pc putchar_unlocked
#define putchar_unlocked putchar
#define getchar_unlocked getchar
#define read freopen("dataN.txt","r",stdin)
#define write freopen("dataOUT.txt","w",stdout)
int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}
int k,i,high,ans,t,n,l,a[100001];
void scan_integer(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}
void writeInt (int n)
{
        int N = n, rev, count = 0;
        rev = N;
        if (N == 0) { pc('0'); pc('\n'); return ;}
        while ((rev % 10) == 0) { count++; rev /= 10;}
        rev = 0;
        while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}
        while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
        while (count--) pc('0');
        pc('\n');
}
int main()
{

    scan_integer(&t);
    while(t--)
    {
        getchar_unlocked();
        scan_integer(&n),scan_integer(&l);
        for(i=0;i<n;i++)
            scan_integer(&a[i]);
        qsort (a,n,sizeof(int),compare);
        high=n-1,ans=0;
        for(i=0;i<=high;i++)
            {
                if(high!=i && a[i]+a[high]<=l)
                    high--;
                ans++;
            }
        writeInt(ans);
            if(t)
                pc('\n');
    }
    return 0;
}
