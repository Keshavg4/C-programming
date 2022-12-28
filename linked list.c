#include <stdio.h>
#include <stdlib.h>
struct list
{
    int value;
    struct list *next;
}*start;

void insert_end()
{
    struct list *newnode=(struct list*)malloc(sizeof(struct list));
    printf("enter value:\n");
    scanf("%d",&newnode->value);
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;

    }
    else
    {
        struct list *node=start;
        while(node->next!=NULL)
        {
            node=node->next;
        }
        node->next=newnode;
    }

    printf("Node Inserted\n");
}
void beg()
{
    struct list *newnode=(struct list*)malloc(sizeof(struct list));
    printf("Enter Value:\n");
    scanf("%d",&newnode->value);
    newnode->next=NULL;
    if(start!=NULL)
    {
        newnode->next=start;

    }
    start=newnode;
    printf("Node Inserted\n");
}
void insert_post()
{
    int pos,flag=0;
    printf("Enter Position:\n");
    scanf("%d",&pos);
    if(start==NULL||pos==1)
    {
        insert_end();
    }

    struct list *node=start;
    int counter=1;
    while(node->next!=NULL)
    {
        if(counter==pos-1)
        {
            flag=1;
            struct list *newnode=(struct list*)malloc(sizeof(struct list));
            printf("Enter value: ");
            scanf("%d",&newnode->value);
            newnode->next=node->next;
            node->next=newnode;
            printf("Node inserted at %d ",pos);

        }
        node=node->next;
        counter++;
    }
    if(!flag)
    {
        insert_end();
        printf("Invalid Position . Node inserted At Last\n");
    }
}
void show()
{
    if(start==NULL)
    {
        printf("Empty List\n");
        return ;
    }
    printf("Node are\n");
    struct list *temp=start;
    while(temp!=NULL)
    {
        printf("%d|%p\t",temp->value,temp->next);
        temp=temp->next;
    }
}
void insert_before()
{
    int val,f=0;
    printf("Enter value to be search :");
    scanf("%d",&val);
    struct list *node=start;
    if(start==NULL||start->value==val)
    {
        beg();
        f=1;
        return;
    }
    else
    {
        struct list *newnode=(struct list*)malloc(sizeof(struct list));
        printf("Enter value:\n");
        scanf("%d",&newnode->value);
        struct list *pre=start;
        node=node->next;
        while(node!=NULL)
        {
            if(node->value==val)
            {
                f=1;
                newnode->next=node;
                pre->next=newnode;
                printf("Node inserted before %d  value postion",val);
            }
            node=node->next;
            pre=pre->next;
        }
        if(!f)
        {
            printf("Invalid Position . Node inserted At Last\n");
        }

    }
}
void remove_beg()
{
    int val;
    if(start==NULL)
    {
        printf("Empty list");
        return;
    }
    val=start->value;
    start=start->next;
    printf("Deleted Node with %d value",val);
}
// deletion of last node

//deletion of last node using stack -> create an empty stack of node type traverse link list from start to and push elemnt to stack till the last node having null value. put the null value to the top of stack node then pop all the lemts from stack
//note-stack is static memory so that we have to create an empty stack for fixed no. of node the time complexity will be order bof n ith both casess
// wastafe of memory is thye size of stack
void remove_end()
{
    int val,pos;

    //printf("enter the position you want to delete");
    //scanf("%d",&pos);
    if(start==NULL)
    {
        printf("Empty list");
        return;
    }
    if(start->next==NULL)
    {
        start=NULL;
        return;
    }
    val=start->value;
    struct list *node=start;
    struct list *pre=start;
    node=node->next;
    while(node->next!=NULL)
    {
        node=node->next;
        pre=pre->next;
        val=node->value;
    }
    pre->next=NULL;
    printf("Deleted Node with %d value",val);
    free(node);
}
void remove_nodeno()
{
    struct list*node;
    int pos;
    int flag;
    printf("enter the poition you want delete:\n");
    scanf("%d",&pos);
    if(start==NULL)
    {
        printf("EMpty\n");
        return;
    }
    if(pos==1)
    {
        node=start;
        start=start->next;
        flag=1;
    }
    else
    {
        int count =2;
        node=start->next;
        struct list *pre=start;
        while(node!=NULL)
        {
            if(pos==count)
            {
                flag=1;
                pre->next=node->next;
                break;
            }
            else
            {
                count++;
                node=node->next;
                pre=pre->next;
            }
        }
    }
    if(flag)
    {
        printf("Deleted Node with %d value",node->value);
        free(node);
    }
    else
    {
        printf("Invalid Position:");
    }
}

int main()
{
    start=NULL;
    int choice;
    do
    {
        printf("\n1.........insert from rear\n");
        printf("2.........insert from beg\n");
        printf("3.........insert at position\n");
        printf("4.........insert before the value\n");
        printf("5.........remove node from beg\n");
        printf("6..........remove node from end\n");
        printf("7..........remove node from poistion\n");
        printf("8..........show\n");
        printf("9..........Exit\n");
        printf("ENTER YOUR CHOICE:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_end();
            break;
        case 2:
            beg();
            break;
        case 3:
            insert_post();
            break;
        case 4:
            insert_before();
            break;
        case 5:
            remove_beg();
            break;
        case 6:
            remove_end();
            break;
        case 7:
            remove_nodeno();
            break;
        case 8:
            show();
            break;
        case 9:
            printf("existing.....\n");
            break;

        default:
            printf("Invalid Choice\n");
        }
    }
    while (choice != 9);



}
//to remove any node from link list we can use free method .
// as we aware that memory canot be removed or deleted it can on;y over writen
// the free method take any adrsss like node * or takes any pointer variable and defrence that pointers to some other memory locations
//it releases allocated memory by (malloc/Dma)
//the relased memory can be used by other method
//by defaulsts . o/s,freed all memory taken by any program after the termination  of programs
