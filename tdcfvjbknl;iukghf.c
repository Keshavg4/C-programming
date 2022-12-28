#include <stdio.h>

int main()
{
    int array[100], position, c, n;
    printf("Name - Keshav Gupta\n");
    printf("Roll no. -2100320120088\n");
    printf("Class & Section -CS(B)\n");

    printf("Enter size of array :");
    scanf("%d", &n);

    printf("Enter %d elements :", n);

    for ( c = 0 ; c < n ; c++ )
    scanf("%d", &array[c]);

    printf("Enter the location where you want to delete element :");
    scanf("%d", &position);

    if ( position >= n+1 )
    printf("Deletion not possible.\n");

    else
    {
        for ( c = position - 1 ; c < n - 1 ; c++ )
        array[c] = array[c+1];

        printf("Resultant array after deletion is : ");

        for( c = 0 ; c < n - 1 ; c++ )
        printf("%d ", array[c]);
    }
    return 0;
}


