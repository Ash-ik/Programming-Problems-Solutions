#include<stdio.h>
#include<string.h>
int main()
{
    char value,a[1000];
    int x,t,l,d,i=1;
    scanf("%d",&t);
        getchar();
    while(i<=t)
    {
        while(gets(a)!='\0')
        {
                l=strlen(a);
                if(l==0) {printf("\n");break;}
                for(x=0;x<l;x++)
                    {
                switch (a[x])
                    {
                        case '3': printf("E");
                        break;
                        case '0': printf("O");
                        break;
                        case '4': printf("A");
                        break;
                        case '9': printf("P");
                        break;
                        case '8': printf("B");
                        break;
                        case '5': printf("S");
                        break;
                        case '7': printf("T");
                        break;
                        case '2': printf("Z");
                        break;
                        case '6': printf("G");
                        break;
                        case '1': printf("I");
                        break;
                        default:printf("%c",a[x]);
                        break;
                        }
                    }
                printf("\n");
        }
        i++;
    }    return 0;
}
