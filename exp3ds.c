#include<stdio.h>
void main()
{
    int i,n,x;
    printf("Name - Keshav Gupta\n");
    printf("Roll no. -2100320120088\n");
    printf("Class & Section -CS(B)\n");
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter sorted array elements :");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to be inserted:");
    scanf("%d",&x);
    i=n-1;
    while(x<a[i]&&x>=0){
        a[i+1]=a[i];
        i--;}
    a[i+1]=x;
    n++;
    printf("New array:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);}
