#include <stdio.h>
int week(int dd, int mm, int yy)
{
    return (mm>=3 ? mm-2 : mm+10);
    int e = (yy%100);
    int c =(yy/100);
    int f = (dd+((13*mm-1)/5)+e+(e/4)+(c/4)-2*c);

}

int main()
{
    int dd, mm, yy;
    printf("enter the date months year: ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    printf("answer is %d",week(dd,mm,yy));



}
