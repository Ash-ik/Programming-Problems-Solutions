#include<stdio.h>
#include<math.h>
#define MAX 30000000
int ans[MAX];



int main()
{
    int i,j,t;
    char in[20];

        for(i=1;i<=MAX;i++)
            for(j=i<<1;i+j<=MAX;j+=i) {
                if(((i + j)&(j))==j)
                    ans[i+j]++;
        }
        for(i=1;i<=MAX;i++)
            ans[i]=ans[i]+ans[i-1];

    gets(in);
    j=atoi(in);
    i=1;
    while(j--)
    {

        gets(in);
        printf("Case %d: %d\n",i++,ans[atoi(in)]);
    }
    return 0;
}
