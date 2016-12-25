

/*using bitmask */

#include<stdio.h>

int H,N;
void print_bits(int num)
{
    int i;
    for(i=N-1;i>=0;i--)
        printf("%d",((num>>i)&1));
    puts("");
}
int main()
{
    int cnt,i,t,pow[17]={1};
    for(i=1;i<=16;i++)
        pow[i]=pow[i-1]<<1;

    scanf("%d",&t);
    while(t--)
    {
        cnt=0;

        scanf("%d %d",&N,&H);
        int lim=pow[N];
        for(i=1;i<lim;i++)
            if(__builtin_popcount(i)==H)
            print_bits(i);
            if(t)
                puts("");
    }
    return 0;

}
