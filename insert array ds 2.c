#include <stdio.h>
int insert(int arr[],int count, int v)
{
    int temp = count;
    arr[temp]=v;
    while(temp>0)
    {
        if(arr[temp]>=arr[temp-1])
        {
            break;
        }
        else
        {
            int t=arr[temp];
            arr[temp]=arr[temp-1];
            arr[temp-1]=t;
        }
    }
}
void show(int arr[],int s)
{
    printf("number are: \n");
    for(int i=0; i<s; i++)
    {
        printf("%d, ",arr[i]);
    }
}
int main()
{
    int num[10];
    for(int i=0; i<10; i++)
    {
        printf("enter number %d : ",i+1);
        scanf("%d",&num[i]);
    }
    show(num,10);
    insert(num,11,175);
    show(num,11);
}
