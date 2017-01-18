#include<stdio.h>
#include<string.h>
#define maxlen 61
#define read freopen("dataN.txt","r",stdin)
#define write freopen("dataOUT.txt","w",stdout)
#define MAXIMUM_BUFFER_CAPACITY 4200000
typedef long long ll;

char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;
long long scan_integer()
{
    long long k=0;
    while(*buffer_ptr < 33 )
        buffer_ptr++;
    do {
        k = k*10 + *buffer_ptr++ - '0';
    } while(*buffer_ptr > 32);
    return k;
}

int main()
{
    fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);
    int n,i,lena,lenb,j;
    int a1[maxlen],b1[maxlen];
    ll Or,And,x,a,b,R,powOfTwo[66]={1};
    for(i=1;i<62;i++)
        powOfTwo[i]=powOfTwo[i-1]<<1;
    const ll one = 1;

    n=scan_integer();
    for(i = 1; i <= n; i++){
        a=scan_integer(),b=scan_integer();

        lena = 0;
        x = a;
        while(x) {
           a1[lena] = x&1;
           x >>= 1;
           lena++;
        }

        lenb = 0;
        x = b;
        while(x) {
           b1[lenb] = x&1;
           x >>= 1;
           lenb++;
        }


        if(lenb>lena){
          Or =powOfTwo[lenb]-1;
          And = 0;
        }
        else{
          for(j=lenb-1;j>=0;j--){
             if(a1[j]!=b1[j]) break;
          }

          R = powOfTwo[j+1]-1;
          Or = b|R;
          And = b&~R;
        }

    printf("Case %d: %lld %lld\n",i,Or,And);
    }
	return 0;
}
