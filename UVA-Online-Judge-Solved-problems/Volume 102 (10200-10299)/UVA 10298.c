#include<stdio.h>
#include<string.h>
char input[1000003];
int main()
{
    int i,j;
    while(scanf("%s",input)==1 &&strcmp(input,"."))
    {
        j=1;
        for(i=1;input[i];i++)
            while(input[i]!=input[i%j])
            ++j;
        if(i%j==0)
        printf("%d\n",i/j);
        else
            printf("1\n");
    }
    return 0;
}

