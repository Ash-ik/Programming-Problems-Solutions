#include<stdio.h>
#include<string.h>
char a[1000099],line[20];
int main()
{
    char p,q;
    int t,n,i,j,flag;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d\n",&n);
        flag=0;
        for(i=0;i<n;i++)
            {
            gets(line);
            a[i]=line[0]+line[2]-'0';
            if(a[i]>57)
            {
                a[i]=(a[i]-'0')%10+'0';
                j=i-1;
                ++a[j];
                while(a[j]==58)
                {
                    a[j]=(a[j]-'0')%10+'0';
                    j--;
                    ++a[j];
                }
            }
        }
        a[n]='\0';
        printf("%s\n",a);
        if(t)
            printf("\n");
    }
    return 0;
}

