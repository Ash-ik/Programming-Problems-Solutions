#include<stdio.h>
int main()
{
    char ch;
    register int total=0;
    while(scanf("%c",&ch)!=EOF)
    {
        if(!(ch=='#'||ch=='1'||ch=='0'))
            continue;
        if(ch=='#')
        {
            if(total)
                printf("NO\n");
            else printf("YES\n");
            total=0;
        }
        else
                total=(total*2+ch-'0')%131071;
    }
    return 0;
}
