#include<cstdio>
#include<string>
using namespace std;
int main()
{
    char temp;
    string hugeNum;
    while(scanf("%c",&temp)==1)
    {
        if(temp>='0' && temp<='9')
            hugeNum+=temp;

            long long secondNum;

        if(temp=='/')
        {
            scanf("%lld",&secondNum);
            long long hold=(hugeNum.at(0)-'0'),save;
            int flag=0;
            save=hold/secondNum;
                if(save)
                printf("%lld",save);
                else if(hugeNum.length()==1)
                    printf("%lld",save);

            for(int i=1;i<hugeNum.length();i++)
            {
                hold=(hold%secondNum)*10+hugeNum.at(i)-'0';
                save=hold/secondNum;
                if(save)
                flag=1;
                if(flag)
                printf("%lld",save);
            }
            printf("\n");
            hugeNum="";
        }
        if(temp=='%')
        {
            scanf("%lld",&secondNum);
            long long x=hugeNum.at(0)-'0';
            int n=0;
        while(++n!=hugeNum.length()) x=(x*10+hugeNum.at(n)-'0')%secondNum;
        printf("%lld\n",x);
        hugeNum="";
        }
    }
    return 0;
}
