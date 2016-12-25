#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int period(char *input)
{
    int len=strlen(input),i,j,k,l,m;
    for(i=1;i<=len/2;i++)
    {
        bool ok=true;
        char temp[50];
        for(j=0;j<i;j++)
            temp[j]=input[j];
        temp[j]='\0';
        for(k=0;k<len && ok ;k+=i)
        {
            for(l=0;l<i && ok;l++)
                if(temp[l]!=input[k+l])
                ok=false;
        }
        if(ok)
            return i;
    }
    return len;
}

int main()
{
    int testCase,p=-1;
    scanf("%d",&testCase);
    while(testCase--)
    {
        char input[85];
        scanf("%s",input);
        if(++p)
            printf("\n");
        printf("%d\n",period(input));

    }
    return 0;
}
