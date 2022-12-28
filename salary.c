//program to find net salary in c
#include <stdio.h>
main()
{
    int n, allow ;
    float hra, da, pf, netsalary;
    char grade;
    printf("enter the basic salary: ");
    scanf("%d",&n);
    fflush(stdin);
    printf("enter the grade: ");
    scanf("%c",&grade);
    hra=(0.20f*n);
    da=(0.50f*n);
    pf=(0.11f*n);
    if( grade=='A')
    {
        allow = 1700;
    }
    else if(grade=='B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }
    netsalary = (n+hra+da+allow-pf);
    printf("net salary is: %f ",netsalary);
    return 0;



}

