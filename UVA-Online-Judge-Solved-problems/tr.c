#include <stdio.h>

int main()
{
    int i,ans,w;
    char a[1000];
    while(gets(a))
    {
        ans=0;
        w=1;
        for(i=0;a[i];i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(w)
                {
                    ans++;
                    w=0;
                }
            }
            else
            w=1;
        }
        printf("%d\n",ans);
    }
    return 0;
}



