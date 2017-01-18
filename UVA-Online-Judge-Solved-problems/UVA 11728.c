#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int solution[1001]= {0,1};
void sieve_ans()
{
    int sum,i,j,lim;
    for(j=2; j<1001; j++)
    {
        sum=1,lim=sqrt(j)+1;
        for(i=2; i<lim; i++)
            if(!(j%i))
            {
                if(!((i*i)^j))
                    sum=sum+i;
                else
                    sum=sum+i+(j/i);
            }
        sum=sum+j;
        if(sum<1001)
            solution[sum]=j;
    }
}
int main()
{
    int n,cases=1;
    sieve_ans();
    char in[7];
    while(gets(in))
    {
        n=atoi(in);
        if(!n) return 0;
        printf("Case %d: ",cases++);
        if(!solution[n]) puts("-1");
        else
            printf("%d\n",solution[n]);
    }
    return 0;

}
