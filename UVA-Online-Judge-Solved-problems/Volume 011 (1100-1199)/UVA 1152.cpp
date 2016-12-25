#include <bits/stdc++.h>
#define MAX 4005
using namespace std;

#define gc getchar_unlocked
void scan_integer( long long *n)
{
    register long long c = gc();
    long long x = 0;
    int neg = 0;
    for( ; ((c<48 || c>57) && c != '-'); c = gc() );
    if( c=='-' ) {
        neg=1;
        c=gc();
    }
    for( ;c>47 && c<58; c = gc() ) {
        x = (x << 1) + (x << 3) + c - 48;
    }
    if(neg)
        *n=-x;
    else *n=x;
}

long long i,j,k,n,m,test,t,y,x,cnt,flg,idx2,a[MAX],b[MAX],c[MAX],d[MAX],cd[MAX*MAX];

long long Binary_Search( long long arr[], long long key, long long start, long long last)
{
    long long index=-1,mid;
    while(start<=last)
    {
        mid=(start+last)/2;
        if(key==arr[mid])
        {
            index=mid;
            last=mid-1;
        }
        else if(key>arr[mid])
            start=mid+1;
        else if(key<arr[mid])
            last=mid-1;
    }
    return index;
}
int main()
{
    scan_integer(&test);
    flg=0;
    while(test--)
    {
        scan_integer(&n);
        for(i=0; i<n; i++)
            scan_integer(&a[i]),scan_integer(&b[i]),scan_integer(&c[i]),scan_integer(&d[i]);
        idx2=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cd[idx2]=c[i]+d[j];
                idx2++;
            }
        }

        sort(cd,cd+idx2);
        cnt=0;

        for( long long i=0; i<n; i++)
        {
            for( long long j=0; j<n; j++)
            {
                long long ab=a[i]+b[j];
                            m=Binary_Search(cd,(ab*(-1)),0,idx2-1);
            if( m>=0)
            {
                for( long long y=m; y<idx2; y++)
                {
                    if(cd[y]==(ab*(-1)))
                        cnt++;
                    else
                        break;
                }
            }
            }
        }
        if(flg)
            printf("\n");
        flg=1;
        printf("%lld\n",cnt);
    }
    return 0;
}
