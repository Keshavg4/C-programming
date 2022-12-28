#include <stdio.h>
int main()
{
    int dd,mm,yy;
    int k,d,c,f;
    printf("enter the dob(dd/mm/yy): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    mm = mm>=3 ? mm-2 : mm+10;
    k = dd;
    d = yy%100;
    c = yy/100;
    f = k+ ((13*mm-1)/5)+ d + (d/4)+(c/4)- 2*c;
    printf("f is %d",f);
    switch(f%7)
    {
    case 0:
        printf("sun.");
        break;
    case 1:
        printf("mon");
        break;
    case 2:
        printf("tues.");
        break;
    case 3:
        printf("wed.");
        break;
    case 4:
        printf("th.");
        break;
    case 5:
        printf("fri.");
        break;
    case 6:
        printf("sat.");
        break;
    case 7:
        printf("sun.");
        break;
    }
}
