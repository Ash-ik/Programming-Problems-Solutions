#include<stdio.h>
#include<string.h>
int main()
{
    char *constantOutput1="#include<string.h>\n#include<stdio.h>\nint main()\n{",*constantOutput2="printf(\"\\n\");\nreturn 0;\n}";
    int NoOfSentence,cases=0;
    while(scanf("%d",&NoOfSentence) && NoOfSentence)
    {
        scanf("\n");
        printf("Case %d:\n",++cases);
        int i,p;
        char sentence[NoOfSentence+2][120];
        for(i=0;i<NoOfSentence;i++)
            gets(sentence[i]);
            puts(constantOutput1);
            for(i=0;i<NoOfSentence;i++)
            {
                printf("printf(\"");
                for(p=0;sentence[i][p];p++)
                {
                    if(sentence[i][p]=='\\')
                        printf("\\\\",sentence[i][p]);
                        else if(sentence[i][p]=='\"')
                            printf("\\\"",sentence[i][p]);
                    else
                        printf("%c",sentence[i][p]);
                }
                printf("\\n\");\n");
            }
            puts(constantOutput2);
    }
    return 0;
}
