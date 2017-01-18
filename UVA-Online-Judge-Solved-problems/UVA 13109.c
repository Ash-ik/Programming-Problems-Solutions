#include<stdio.h>
#include<stdlib.h>
#define read freopen("dataN.txt","r",stdin)
#define MAXIMUM_BUFFER_CAPACITY 11000000
int ans[10000]={},cnt=0,a[131072];
char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;
int scan_integer()
{
    int k = 0;
    while( *buffer_ptr < 33 )
        buffer_ptr++;
    do {
        k = k*10 + *buffer_ptr++ - '0';
    } while(*buffer_ptr > 32);
    return k;
}

int cmp(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int t,n,w,i;
    fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);
    t=scan_integer();
    while(t--)
    {
        n=scan_integer();
        w=scan_integer();
        for(i=0;i<n;i++)
            a[i]=scan_integer();
         qsort(a,n,sizeof(int),cmp);
        for(i=0;i<n;i++)
            {
                if(w-a[i]>=0)
                    w=w-a[i];
                else
                    break;
            }
        ans[cnt++]=i;
    }
    for(t=0;t<cnt;t++)
        printf("%d\n",ans[t]);
    return 0;

}
