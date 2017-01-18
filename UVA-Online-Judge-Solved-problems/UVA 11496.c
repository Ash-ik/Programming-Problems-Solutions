#include<stdio.h>
#include<string.h>
int main()
{

    int n;
    int first,second,last,val,peak,firstVal,secondVal,thirdVal;
    char inL[100000],inS[10],*tokenPtr;
    while(gets(inS) &&strcmp(inS,"0"))
    {
        peak=0;
        gets(inL);
        tokenPtr = strtok(inL, " ");
        int counts=0;
    while(tokenPtr != NULL)
    {
        val=atoi(tokenPtr);
        if(!counts)
            first=firstVal=val;
        else if(counts==1)
            second=secondVal=val;
        else
        {
            thirdVal=val;
            if(secondVal>firstVal &&secondVal>thirdVal) peak++;
            else if(secondVal<firstVal &&secondVal<thirdVal) peak++;
            firstVal=secondVal;
            secondVal=thirdVal;
        }
        counts++;
        tokenPtr = strtok(NULL, " ");
    }
    last=val;

    if(last>firstVal && last>first) peak++;
    else if(last<firstVal && last<first) peak++;

    if(first>last && first>second) peak++;
    else if(first<last && first<second) peak++;
        printf("%d\n",peak);
    }
    return 0;
}
