#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,x,flag=0,z,c;
    char song[17][100]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    char name[200][100];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%s",&name[i]);
    if(n>16)
        c=n/16+1;
    else c=1;
    for(i=0,x=0,z=0;i<16*c;i++)
        {
            if(!flag &&z==16)
                z=0;
            printf("%s: %s\n",name[x],song[z++]);
            x++;
            if(x==n)
                {
                    x=0;
                    flag=1;
                }
        }

    return 0;
 }
