#include<stdio.h>
#include<string>
#include<math.h>
#include<sstream>
using namespace std;
string toString(long x)
{
    stringstream p;
    p<<x;
    return p.str();

}
long power(int a,int b)
{
    long ans=1;
    while(b--)
        ans*=a;
    return ans;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long n,temp=0;
        scanf("%ld",&n);
        string c=toString(n);
        int len=c.length(),i,armstrong=1;
        for(i=0;i<len;i++)
        {
            long k=power((c[i]-'0'),len);
            if(k>n)
            {
                armstrong=0;
                break;
            }

            temp+=k;
            if(temp>n)
            {
                armstrong=0;
                break;
            }
        }
        if(temp<n ||armstrong==0) printf("Not Armstrong\n");
        else printf("Armstrong\n");
    }
    return 0;
}

