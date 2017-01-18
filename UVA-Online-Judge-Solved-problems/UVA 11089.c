#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define pc putchar_unlocked
#define gc getchar_unlocked
#define getchar_unlocked getchar
#define putchar_unlocked putchar
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
int fib[43]={1,2};


int scan_positive_int(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}

    int cnt;
char ans[100005];
void fi_DtoB(int n,char ans[])
{
    int index=fi_binSearch(0,43,n);
    cnt=-1;
    while(index>=0)
        {
            if(n>=fib[index])
            {
                ans[++cnt]='1';
                n-=fib[index];
            }
            else ans[++cnt]='0';
            index--;
        }
    ans[++cnt]='\n';
    ans[++cnt]='\0';
}
int fi_binSearch(int low,int high,int n)
{
    int mid;
        while(high-low>1)
            {
                mid=(high+low)/2;
                if(fib[mid]>n)
                    high=mid;
                else
                    low=mid;
            }
            if(fib[high]<=n) return high;
            else return low;
}
int main()
{
int i;
for(i=2;i<=43;i++)
        fib[i]=fib[i-1]+fib[i-2];
    int t,n;
    scan_positive_int(&t);
    while(t--)
    {
        scan_positive_int(&n);
        fi_DtoB(n,ans);
        fwrite(ans,1,cnt,stdout);
    }
    return 0;
}

