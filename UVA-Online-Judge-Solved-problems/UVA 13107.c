#include<stdio.h>
#include<string.h>
char m[10] = {'0', '1', '5', '3', '4', '2', '9', '7', '8', '6'};
char buf[262144], *ans;
int main()
{
    char in[131072];
    while(gets(in))
    {
        int i,n,ltr[150]={},cnt=1;
        ans=buf;
        for(i=0;in[i];i++)
        {
            if(!ltr[in[i]])
                ltr[in[i]]=cnt++;
            n=ltr[in[i]];

                char x[20];
                int index=0;
                while(n)
                {
                    x[index++]=m[n%10];
                    n=n/10;
                }
                while(index--)
                        *ans=x[index],*ans++;
                *ans='\0';
        }
            puts(buf);
    }
    return 0;
}
