#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void KMP_prefix(char *p,int pref_table[])
{
    int i=0,j;
    for(j=2;p[j];j++)
    {
        while(i>0 &&p[i]!=p[j-1])
            i=pref_table[i];
        if(p[i]==p[j-1])
            i++;
        pref_table[j]=i;
    }

}

bool KMP_matcher(char *t,char *p,int pref_table[])
{
    int m=strlen(p),i=0,j;
    for(j=0;t[j];j++)
    {
        while(i>0 &&p[i]!=t[j])
            i=pref_table[i-1];
        if(p[i]==t[j])
            i++;
        if(i==m)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t,q;
    char x[100002],y[1002];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(x);
        scanf("%d",&q);
        getchar();
        while(q--)
        {
            gets(y);
            int pref_table[strlen(y)+1];
            pref_table[1]=0;
            KMP_prefix(y,pref_table);
            if(KMP_matcher(x,y,pref_table))
                puts("y");
            else puts("n");

        }

    }
    return 0;
}


