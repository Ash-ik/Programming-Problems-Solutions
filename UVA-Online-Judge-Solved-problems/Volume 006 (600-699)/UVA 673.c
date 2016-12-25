#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isparenthesis(char n)
{
    if(n=='['||n==']'||n=='('||n==')')
        return true;
    return false;
}
int main()
{
    int n,i;
    scanf("%d%*c",&n);
    for(i=0;i<n;i++)
    {
        char a[130];
        gets(a);
        int p=strlen(a);
            int n=0,x;
            char tricks[130];
            for(x=0;x<p;x++)
            {
                char c=a[x];
                if(isparenthesis(c))
                {
                  if(c=='['||c=='(')
                        tricks[++n]=c;
                        else
                        {
                            if(c==']')
                            {
                                if(tricks[n]!='[')
                                break;
                                else n--;
                            }
                            else if(c==')')
                            {
                                if(tricks[n]!='(')
                                    break;
                                else n--;
                            }
                        }
                }
            }
            if(x!=p||n)
                printf("No\n");
            else printf("Yes\n");
    }
    return 0;
}
