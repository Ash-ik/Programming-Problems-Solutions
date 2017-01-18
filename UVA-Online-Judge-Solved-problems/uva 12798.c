#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    int i,j,ans,counter;
    char x[1000];
    while(gets(x))
    {
        sscanf(x,"%d %d",&n,&m);
        ans=0;
        for(i=1;i<=n;i++)
        {
            gets(x);
            char *p;
            counter=0;
        for (p=strtok(x," ");p;p=strtok(NULL, " "))
{

                int temp=atoi(p);
                if(temp)
                    counter++;
}
            if(counter==m)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}

