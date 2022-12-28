#include <stdio.h>
int main()
{
    int A[20], I, J, M, N;
    printf("Name - Keshav Gupta\n");
    printf("Roll no. -2100320120088\n");
    printf("Class & Section -CS(B)\n");
    printf("Enter The size of Array :  ");
    scanf("%d", &N);
    printf("Enter the array : ");
    for (I = 0; I < N; I++){
        scanf("%d", &A[I]);}
    M=A[0];
    for(I=0;I<N;I++){
        if(M<A[I]){
            M=A[I];}}
    int B[M];
    for(I=0;I<=M;I++){
        B[I]=0;
    }
     for (I = 0; I < N; I++){
        B[A[I]]=B[A[I]]+1;
    }
    for(I=1;I<=M;I++){
        if(B[I]==1){
            printf("Non Repeated Element :%d\n",I);
        }
        else if(B[I]>1){
            printf("Repeated element : %d\n",I);}}
}
