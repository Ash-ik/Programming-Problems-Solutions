#include<stdio.h>
//void swapr(int  *x, int *);
//swapr( int  *x, int  *y )
//{
//    int  t ;
//    t = *x ;
//    *x = *y ;
//    *y = t ;
//}
void fun(int *x)
{
    *x=0;
}
main( )
{
    int b =1000000;
    int *a=&b;
    *a=0;
    printf ( "\na = %u b = %u", a, b ) ;
}

