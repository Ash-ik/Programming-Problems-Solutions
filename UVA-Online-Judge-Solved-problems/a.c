#include<stdio.h>
#include<string.h>
int main()
{
    const int arraysize = 100;
    int i,a[arraysize];
    size_t x=sizeof(a)/sizeof(a[1]);
    memset(a,0,x); /* fills the whole array with 0 */
    //memset(a,-1,sizeof(a)); /* fills the whole array with -1 */
    for (i = 0; i < 30; i++)
        printf("%d\n",a[i]);
    return 0;
}
