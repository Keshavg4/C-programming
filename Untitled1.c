#include<stdio.h>
int main(){
int i,j,n,m,f=0,k=0,l=0,p=0;
int A[20],B[20],C[20],D[20],E[20];
printf("Enter the no of elements of set A");
scanf("%d",&n);
printf("Enter the elements of set A");
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
printf("Enter the no of elements of set B");
scanf("%d",&m);
printf("Enter the elements of set B");
for(i=0;i<m;i++){
scanf("%d",&B[i]);
}
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(A[i]==B[j]){
            f=1;
            break;}
else{
            f=0; } }
    if(f==0){
            C[k]=A[i];
        k++;}}
 for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(B[i]==A[j]){
            f=1;
            break; }
else{ f=0;
  } }
    if(f==0){
            D[l]=B[i];
        l++;}
}
for(i=0;i<k;i++)
    { E[p]=C[i];
    p++;}
for(i=0;i<l;i++){
  f=0;
for(j=0;j<k;j++){
            if(D[i]==E[j])
                f=1;
break;}
    if(f==0)
       {  E[p]=D[i];
        p++; } }
printf("The symmetric difference is");
for(i=0;i<p;i++){
printf(" %d",E[i]);
}
return 0;
}
