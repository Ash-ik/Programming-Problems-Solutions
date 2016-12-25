#include<stdio.h>
#define pc putchar_unlocked
char buf[36];

int change1( char c )
{
    if ( c >= '0' && c <= '9' )
        return c - '0';
    return c - 'A' + 10;
}

int change2( char c )
{
    if ( c < 10 )
        return c + '0';
    return c - 10 + 'A';
}

int main()
{
    int base1,base2;
    while ( scanf("%s%d%d",buf,&base1,&base2) != EOF ) {
        int value = 0,move = 0,save = 0;
        while ( buf[move] ) {
            value *= base1;
            value += change1(buf[move ++]);
        }
        if ( !value ) buf[save ++] = '0';
        while ( value ) {
            buf[save ++] = change2(value%base2);
            value /= base2;
        }
        if ( save > 7 ) puts("  ERROR");
        else {
                int i;
            for (i = save ; i < 7 ; ++ i )
                pc(' ');
            while ( -- save >= 0 )
                pc(buf[save]);
            pc('\n');
        }
    }
    return 0;
}
