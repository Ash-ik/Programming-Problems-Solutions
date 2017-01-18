#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char *p,in[110],num1[110],num2[110];
    int i,j,t,power;
    gets(in);
    t=atoi(in);
    while(t--)
    {
        gets(in);
        for(i=1;in[i]!='+';i++)
            num1[i-1]=in[i];
            num1[++i]='\0';

            for(j=0;in[i]!=')';j++) num2[j]=in[i++];
            num2[++j]='\0';

        printf("%s %s",num1,num2);
    }
}
