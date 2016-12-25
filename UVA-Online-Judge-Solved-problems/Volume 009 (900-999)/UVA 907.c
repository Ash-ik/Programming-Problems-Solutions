#include <stdio.h>
#include<stdbool.h>
#define MAXIMUM_BUFFER_CAPACITY 3000000

char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;
int scan_integer()
{
    int k = 0;
    while( *buffer_ptr < 33 )
        buffer_ptr++;
    do {
        k = k*10 + *buffer_ptr++ - '0';
    } while(*buffer_ptr > 32);
    return k;
}


int a[100002],s,h;

bool isPlacable(int mid)
{
    int start=a[0],i;
            int needed=1;
            for(i=1;i<h;i++)
                if(a[i]>start+mid)
                {
                    start=a[i];
                    needed++;
                }

    return needed<=s;
}
int binarySearch(int low,int high)
{
    int mid;
        while(high>low)
        {
            mid=(low+high)/2;
            if(isPlacable(mid))
                high=mid;
                else
                low=mid+1;
        }
        return high;
}

int main()
{
    fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);
    int t,i;
t=scan_integer();
    while(t--)
    {
h=scan_integer(),s=scan_integer();
        i=0;
        a[i++]=scan_integer();
        while(i++<=h+1) a[i]=a[i-1]+scan_integer();

//        qsort(a,h,sizeof(int),compare);

        i=binarySearch(0,(a[h-1]-a[0]+1));
        printf("%.1f\n",i/2.00);
    }
    return 0;
}

