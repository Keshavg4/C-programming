#include <stdio.h>
void show(int arr[],int s)
{
    printf("number are: \n");
    for(int i=0; i<s; i++)
    {
        printf("%d, ",arr[i]);
    }
}
void insert(int arr[],int s,int p,int n)
{
    arr[p-1] = n;
}
int main()
{
    int num[10];
    printf("Name - Keshav Gupta\n");
    printf("Roll no. -2100320120088\n");
    printf("Class & Section -CS(B)\n");
    for(int i=0; i<10; i++)
    {
        printf("enter number %d :",i+1);
        scanf("%d",&num[i]);
    }
    show(num,10);
    insert(num,10,5,1000);
    show(num,10);
}
