#include<stdio.h>
#define size 4
struct queue
{
    int data[size];
    int front;
    int rear;
}q;

void enqueue()
{
    int item;
    if(q.rear==size-1)
    {
        printf("FULL\n");
    }
    else
    {
        printf("ENTER THE NUMBER: ");
        scanf("%d",&item);
        q.rear++;
        q.data[q.rear]=item;
        printf("ITEM INSERTED\n");
        if(q.front==-1)
        {
            q.front=0;
        }
        printf("Front=%d,Rear=%d\n",q.front,q.rear);
    }
}

void dequeue()
{
    int item;
    if(q.front==-1)
    {
        printf("EMPTY\n");
    }
    else
    {
        item=q.data[q.front];
        q.front++;
        if(q.front>q.rear)
        {
            q.front=q.rear=-1;
        }
        printf("ITEM DELETED: %d\n",item);
        printf("Front=%d,Rear=%d\n",q.front,q.rear);
    }

}

void show()
{
    if(q.front==-1)
    {
        printf("EMPTY \n");
    }
    else
    {
        printf("Queue is:\n");
        for(int i=q.front;i<=q.rear;i++)
        {
            printf("%d\n",q.data[i]);
        }

    }


}



int main()
{
    int choice;
    q.front=q.rear=-1;
    do
    {
    printf("1........ENQUEUE\n");
    printf("2........DEQUEUE\n");
    printf("3........SHOW\n");
    printf("4........EXIT\n");
    printf("ENTER THE CHOICE: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        show();
        break;
    case 4:
        printf("Exiting\n");
        break;
    default:
        printf("INVALID CHOICE\n");
    }
    }while(choice!=4);
}


