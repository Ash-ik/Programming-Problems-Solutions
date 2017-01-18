#include<stdio.h>
#include<stdlib.h>
#define MAXIMUM_BUFFER_CAPACITY 600000
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
int main()
{
    fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);
    int i,n,x;
    while(1)
    {
        n=scan_integer();
        if(!n)
            return 0;
        i=0;
        while(n--)
        {
            x=scan_integer();
            if(x!=0)
            {
                i++;
                if(i-1)
                    putchar(' ');
                    printf("%d",x);
            }
        }
        if(!i) printf("0\n");
        else putchar('\n');
    }
}
