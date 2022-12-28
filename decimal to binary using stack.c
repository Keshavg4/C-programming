#include<stdio.h>
#define SIZE 5
struct stack
{
    int data[SIZE];
    int top;     //default value is garbage
};

struct stack init(struct stack r)
{
    r.top=-1;
    return r;
}
struct stack push(struct stack r,int d)
{
   r.top++;
   r.data[r.top]=d;
   return r;
}
struct stack pop(struct stack r)
{
    int item;
    int top;
    if(r.top==-1)
    {
        printf("Empty\n5    ");
    }
    else
    {
        printf("%d\n",r.data[r.top]);
        r.top--;
        return r;

    }
}
void show(struct stack r)
{
    int i;
    if(r.top==-1)
    {
        printf("stack is Empty\n");
    }
    else
    {
        printf("stack is: \n");
        for(i=r.top;i>=0;i--)
        {
            printf("%d\n",r.data[i]);
        }
        printf("TOP= %d \n",r.top);
    }
}
int isEmpty(struct stack s)
{
    return(s.top==-1);
}
int main()
{
    int num;
    int d;
    struct stack r;
    r=init(r);
    printf("Enter the Number: ");
    scanf("%d",&num);
    while(num>0)
    {
        d=num%2;
        r=push(r,d);
        num=num/2;

    }
    printf("Binary\n");
    while(!isEmpty(r))
    {
        r=pop(r);
    }

}
