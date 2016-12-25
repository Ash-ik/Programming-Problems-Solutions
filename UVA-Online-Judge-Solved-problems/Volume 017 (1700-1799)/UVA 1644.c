#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MAX 1299712
#define MAXIMUM_BUFFER_CAPACITY 8000
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


bool isPrime[MAX];
int uB[MAX],lB[MAX];
int main()
{
fread(buffer_to, 1, MAXIMUM_BUFFER_CAPACITY, stdin);

        isPrime[2]=true;
    int i,root,j,n;
    root=sqrt(MAX) + 1;
    for(i=3;i<MAX;i+=2) isPrime[i] = true;
    for(i=3;i<root;i+=2)
    {
        if(isPrime[i])
        {
            for(j=i*i;j<MAX; j+=2*i)
            {
                isPrime[j] = false;
            }
        }

}

for(i=1,j=MAX-1;i<MAX;i++,j--)
{
    if(isPrime[i])
        lB[i]=i;
    else
        lB[i]=lB[i-1];
    if(isPrime[j])
        uB[j]=j;
    else
        uB[j]=uB[j+1];
}
while((n=scan_integer()) &&n)
    printf("%d\n",uB[n]-lB[n]);
return 0;

}
