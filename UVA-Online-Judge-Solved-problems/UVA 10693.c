#include<stdio.h>
#include<math.h>
#include<string.h>
char a[10000];
int l,f;
double v,vol;
int main()
{
    while(gets(a) &&strcmp(a,"0 0"))
    {
        sscanf(a,"%d %d",&l,&f);
        v=sqrt(2.0*l*f);
        vol=(v*3600.0)/(2.0*l);
        printf("%0.8lf %0.8lf\n",v,vol);
    }
    return 0;
}
