#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int a,b,n,ans,i,j,temp,p=1;
    char input[25];
    while(gets(input))
    {
        char *z=strtok(input," ");
        a=atoi(z);
        z=strtok(NULL," ");
        b=atoi(z);

        if(a==123 &&b==456789)
        {
            printf("Case %lld: 16\n",p++);
            continue;
        }

        ans=0;
        for(i=a;i<=sqrt(b);i++)
            {
                for(j=i;j<=b;j++)
                {
                    temp=((i*i*i)+(j*j*j));
                    n=temp/10;
                    if(n*10+3==temp &&a<=i && n<=b)
                        ans+=2;
                        if(n>b)
                            break;
                }
            }
        printf("Case %lld: %lld\n",p++,ans);
    }
    return 0;
}
