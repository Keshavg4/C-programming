#include<stdio.h>
#include "myheader.h"
int main()
{
    int a,b,c,d,e,f;
    //float f;
    a=10,b=5;
    c=add(a,b);
    d=sub(a,b);
    e=mul(a,b);
    f=div(a,b);
    printf("SUM: %d\n",c);
    printf("SUBTRACT: %d\n",d);
    printf("MULTIPLY: %d\n",e);
    printf("DIVISION: %d\n",f);
}
