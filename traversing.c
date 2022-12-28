#include <stdio.h>
int main()
{
    printf("Name - Keshav Gupta\n");
    printf("Roll no. -2100320120088\n");
    printf("Class & Section -CS(B)\n");
    int num[10];
    printf("enter number to traverse: \n");
    for(int i=0; i<10;i++)
    {
       scanf("%d",&num[i]);
    }
    printf("Number are :\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",num[i]);
    }
    return 0;

}
