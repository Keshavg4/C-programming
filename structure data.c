#include<stdio.h>
#define SIZE 5

struct stack
{
    int data[SIZE];
    int top;     //default value is garbage
};

struct stack init(struct stack s)
{
    s.top=-1;
    return s;
}

struct stack push(struct stack s)
{
    int item;
    int top;
    if(s.top==SIZE-1)
    {
        printf("Stack is FULL \n");
    }
    else
    {
        printf("Enter Number : ");
        scanf("%d",&item);
        s.top=s.top+1;
        s.data[s.top]=item;
        printf("Item Inserted\n");
    }
    return s;
}

struct stack pop(struct stack s)
{
    int item;
    int top;
    if(s.top==-1)
    {
        printf("Empty\n5    ");
    }
    else
    {
        printf("popped item is: %d\n",s.data[s.top]);
        s.top--;
        return s;

    }
}

int isEmpty(struct stack s)
{
    return(s.top==-1);
}

struct stack peep(struct stack s)
{
    int top;
    if(isEmpty(s))
    {
        printf("Empty\n");
    }
    else
    {
        printf("peeped:%d\n",s.data[s.top]);
    }
};

int menu()
{
    int choice;
    printf("1.......push\n");
    printf("2.......pop\n");
    printf("3.......show\n");
    printf("4.......peep\n");
    printf("5.......exit\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);
    return choice;
}

void show(struct stack s)
{
    int i;
    if(s.top==-1)
    {
        printf("stack is Empty\n");
    }
    else
    {
        printf("stack is: \n");
        for(i=s.top;i>=0;i--)
        {
            printf("%d\n",s.data[i]);
        }
        printf("TOP= %d \n",s.top);
    }
}
int main()
{
    int choice;
    struct stack s;
    s=init(s);
    do
    {
        choice=menu();
        switch(choice)
        {
        case 1:
            s=push(s);
            break;
        case 2:
            s=pop(s);
            break;
        case 3:
            show(s);
            break;
        case 4:
            s=peep(s);
            break;
        case 5:
            printf("THANKS FOR VISITING YOU ARE EXITED\n");
            break;
        default:
            printf("Invalid Error\n");

        }
    }while(choice!=5);


}
