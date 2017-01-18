#include<stdio.h>
#include<string.h>
#include<math.h>
int fastRead_string(char *str)
{
    register char c = 0;
    register int i = 0;
    while (c < 33)
        c = getchar_unlocked();


    while (c != '\n') {

        str[i] = c;

        c = getchar_unlocked();

        i = i + 1;

    }

    str[i] = '\0';

    return i;

}



int main()
{
    int i,root,len;
    char in[10001];
    while((len=fastRead_string(in)) &&!(len==1 &&in[0]=='0'))
    {
        if(!(len%2))
        {
            root=sqrt((in[0]-'0')*10+(in[1]-'0'));
            len=(len-1)/2;
        }
        else
        {
            if(in[0]=='1') root=1;
            else
                root=sqrt(in[0]-'0');
            len=len/2;
        }
        printf("%d",root);
        for(i=0;i<len;i++)
            putchar_unlocked('0');

        putchar_unlocked('\n');
    }
    return 0;
}
