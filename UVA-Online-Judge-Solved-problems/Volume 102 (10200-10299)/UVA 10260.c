#include<stdio.h>
#include<string.h>
int main()
{
    int soundex[100]={};
    soundex['B']=soundex['F']=soundex['P']=soundex['V']=1;
    soundex['C']=soundex['G']=soundex['J']=soundex['K']=soundex['Q']=soundex['S']=soundex['X']=soundex['Z']=2;
    soundex['D']=soundex['T']=3;
    soundex['L']=4;
    soundex['M']=soundex['N']=5;
    soundex['R']=6;

    char x[25];
    while(scanf("%s",x)==1)
    {
        int i=1,len=strlen(x);
        if(soundex[x[0]])
            printf("%d",soundex[x[0]]);
        for(i=1;i<len;i++)
            if(soundex[x[i]] && soundex[x[i]]!=soundex[x[i-1]])
            printf("%d",soundex[x[i]]);
        printf("\n");
    }
    return 0;

}
