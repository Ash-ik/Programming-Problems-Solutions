#include<stdio.h>
#include<stdlib.h>
#define MAXIMUM_BUFFER_CAPACITY 30000000

char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;

int scan_integer()
{
    int k = 0;
    while( *buffer_ptr < 33 )
        buffer_ptr++;

    if(*buffer_ptr=='0') return 0;
    do {
        k = k*10 + *buffer_ptr++ - '0';
    } while(*buffer_ptr > 32);
    return k;
}
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int a[2000005],i,n;
int main()
{
    fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);
    while (n=scan_integer())
    {
        for (i=0;i<n;i++)
        a[i]=scan_integer();
        qsort(a,n,4,compare);
        printf("%d",a[0]);
        for (i=1;i<n;i++)
            printf(" %d",a[i]);

        puts("");
    }
    return 0;
}
