#include<stdio.h>

void localMAX(int arr[], int n){
    int new[10], k=0;
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            if(arr[i]>arr[i+1]){
                new[k++]= arr[i];
            }
        }
        else if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            new[k++]= arr[i];
        }
        else if(i==n-1){
            if(arr[i]>arr[i-1]){
                new[k++]= arr[i];
            }
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            if(new[j]==arr[i]){
                printf("%d ", i);
            }
        }
    }

}
int main()
{
    int arr[]={20,1,-3,2,0,25,1,24,15,25,4,-2,-25};
    int n=13;

    localMAX(arr, n);

    return 0;
}
