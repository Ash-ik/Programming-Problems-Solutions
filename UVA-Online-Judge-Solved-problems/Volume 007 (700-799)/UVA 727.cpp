#include<stdio.h>
#include<stack>

int Priority(char x){
    if( x == '(' ) return 0 ;
    if( x == '+' or x == '-' ) return 1 ;
    if( x == '*' or x == '/' ) return 2 ;
    return -1;
}

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char c;
        while(scanf("%c",&c) &&c!='\n')
        {
            getchar();
            printf("%c\n",c);

        }

    }

}
