#include<stdio.h>
#include<string.h>
char *in="`\t\n 1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
char *out="`\t\n 123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
char arr[1000];
int main()
{
    int i;
    char c;
    for(i=0;i<strlen(in);i++)
        arr[in[i]]=out[i];
    while(scanf("%c",&c)==1)
    putchar(arr[c]);
    return 0;
}
