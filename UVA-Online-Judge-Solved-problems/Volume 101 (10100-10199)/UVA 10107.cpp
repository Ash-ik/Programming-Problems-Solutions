#include<stdio.h>
#include<algorithm>
#define read(x)  freopen(x,"r",stdin)
using namespace std;
int main()
{
    long int num[20000],i,z,j,c=0;
    while(scanf("%ld",&num[c])!=EOF)
    {
        if(num[c]<num[c-1])
        sort(num,num+c+1);
        if(c==0)
        {
            printf("%ld\n",num[c]);
            c++;
            continue;
        }

        if (c%2==0)
        {
            printf("%ld\n",num[c/2]);
        }
        else if (c%2!=0)
        {
            z=(num[c/2]+num[(c/2)+1])/2;
            printf("%ld\n",z);
        }
        c++;
    }
    return 0;
}
