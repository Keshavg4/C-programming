#include<stdio.h>

int main()
{
    int arr[100], i,n;
    printf("Name - Keshav Gupta\n");
    printf("Roll no. -2100320120088\n");
    printf("Class & Section -CS(B)\n");
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array elements in reverse order : ");
    for(i=n-1; i>=0; i--)
    {
        if(i==0)
            printf("%d", arr[i]);
        else
            printf("%d, ", arr[i]);
    }

    return 0;
}
