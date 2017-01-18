#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char a[110];
        int i=0;
        string x1="",x2="",temp="";

        gets(a);


        while(a[i]!='<')
            printf("%c",a[i++]);
i++;
        while(a[i]!='>')
            printf("%c",a[i]),x2=x2+a[i],i++;
i++;
        while(a[i]!='<')
                printf("%c",a[i]),temp=temp+a[i],i++;
i++;
        while(a[i]!='>')
                printf("%c",a[i]),x1=x1+a[i],i++;
i++;
        while(a[i])
            x2=x2+a[i],printf("%c",a[i]),i++;

                x1=x1+temp;

                printf("\n");
        gets(a);

        for(int i=0;a[i]!='.';i++)
            printf("%c",a[i]);
            printf("%s%s\n",x1.c_str(),x2.c_str());
    }
    return 0;
}
