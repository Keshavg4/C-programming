#include<stdio.h>
//POINTERS
void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}

void calc(int a,int b,int *c,int *d)
{
    *c=a+b;
    *d=a*b;
    return 0;
}

float findc(int r,float *p,float *u)
{
    *p=2*3.14*r;
    *u=3.14*r*r;
}
struct student
{
    int roll;
    char name[20];
};


int main()
{
    struct student s;
    struct student *h;
    printf("=====================================\n");
    int z=5;
    printf("%p\n",&z);
    printf("%d\n",z);
    int p=&z;
    printf("%d\n",p);
    printf("=====================================\n");
    int a=20;
    int b=40;
    swap(&a,&b);
    printf("x=%d,y=%d\n",a,b);
    printf("=====================================\n");
    int add,mul;
    int x,y;
    x=5;
    y=10;
    calc(x,y,&add,&mul);
    printf("sum=%d,Mul=%d\n",add,mul);
    printf("=====================================\n");
    int r;
    float area,peri;
    r=25;
    findc(r,&peri,&area);
    printf("area=%f\n",area);
    printf("perimeter=%f\n",peri);
    printf("=====================================\n");
    h=&s;
    h->roll=100;
    printf("roll=%d\n",h->roll);
    printf("=====================================\n");

}



