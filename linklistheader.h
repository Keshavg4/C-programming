#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int val;
    struct Node*next;
} Node;

//initialize the linked list
Node*initialize()
{
    return NULL;
};

//Creating Node
Node*createNode(int x)
{
    Node*node=(Node*)malloc(sizeof(Node));
    node->val=x;
    node->next=NULL;
};

//insert from begging
void insert_beg(Node**start,int x)
{
    Node*newNode=createNode(x);
    if(*start!=NULL)
    {
        newNode->next=*start;
    }
    *start=newNode;
}

//Insert from last
void insert_last(Node**start,int x)
{
    Node*newNode=createNode(x);
    if(*start == NULL)
    {
        *start = newNode;
        return;
    }
    Node*temp=*start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}

//insert from position
void insert_pos(Node **start, int pos, int x)
{
    int totalNodes = count(*start);
    if (totalNodes+1 < pos)
    {
        printf("\nInvalid position %d, Available Position %d-%d",pos,1,totalNodes+1);
        return;
    }

    Node *newNode = createNode(x);
    if (pos == 1)
    {
        newNode->next = *start;
        *start = newNode;
    }
    else if(totalNodes+1 == pos )
    {
        insert_last(start,x);
    }
    else
    {
        Node *prev = *start;
        Node *current = (*start)->next;
        int p = 2;
        while (p <= pos-1 )
        {
            current = current->next;
            prev = prev->next;
            p++;
        }
        newNode->next = prev->next;
        prev->next = newNode;
    }
    printf("\nNode inserted at %d\n", pos);
}

//Search Function
Node * search(Node *start, int sval)
{
    Node *current  = start;
    while(current !=NULL)
    {
        if(current->val == sval)
            return current;
        current=current->next;
    }
    printf("\nNode with %d value not found",sval);
    return NULL;

}

//Insert from after
void insert_after(Node **start, int val, int x)
{
    Node *current = search(*start, val);
    if(current != NULL){
        Node *newNode = createNode(x);
        newNode->next = current->next;
        current->next = newNode;
        printf("\nNode inserted after %d",val);
    }
}

//Insert from Before
void insert_before(Node**start,int val,int x)
{
    Node*current=search(*start,val);
    if(current!=NULL)
    {
        if(current==*start)
        {
            //node found at first
            insert_beg(start,x);
        }
        else
        {
            Node*prev=(*start);
            Node*curent=(*start)->next;
            Node*newNode=createNode(x);
            while(current!=NULL)
            {
                if(current->val==val)
                {
                    newNode->next=prev->next;
                    prev->next=newNode;
                }
                current=current->next;
                prev=prev->next;
            }
        }
        printf("\n Node inserted before: %d",val);
    }

}

//Empty
int isEmpty(Node*start)
{
    if(start==NULL)
    {
        printf("Empty list");
        return 1;
    }
    return 0;
}

//Delete from begging
void del_beg(Node**start)
{
    if(!isEmpty(*start))
    {
        Node*temp=*start;
        *start=(*start)->next;
        printf("\n%d node deleted\n",temp->val);
        free(temp);
    }
}

//Delete from last
void del_last(Node **start)
{
    if (!isEmpty(*start))
    {
        Node *temp = *start;
        if (temp->next == NULL)
        {
            printf("\n%d deleted node", temp->val);
            *start = NULL;
        }
        else
        {
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            printf("\n%d deleted node", temp->val);
            free(temp->next);
            temp->next = NULL;
        }
    }
}

//Delete from position
void del_pos(Node**start,int pos)
{
    int totalNode=count(start);
    if(totalNode<pos)
    {
        printf("\nInvalid position %d to delete a node",pos);
        return;
    }
    if(pos==1)
    {
        del_beg(start);
    }
    else
    {
        int p=2;
        Node*current=(*start)->next;
        Node*prev=*start;
        while(p<=pos)
        {
            current=current->next;
            prev=prev->next;
            p++;
        }
        prev->next=current->next;
        printf("\n Node at %d position with %d value deleted",pos,current->val);
        free(current);
    }
}
//Delete from after
void del_after(Node**start,int val)
{
    Node*current=search(*start,val);
    if(current!=NULL)
    {
        //valur found
        if(current->next==NULL)
        {
            printf("Node not available after %d,deleteion not possible ",val);
        }
        else
        {
            Node*temp=current->next;
            current->next=temp->next;
            printf("\nNode deleted after %d with %d value",val,temp->val);
            free(temp);
        }
    }
}

//Delete from before
void del_before(Node**start,int val)
{
    Node*current=search(*start,val);
    if(current!=NULL)
    {
        if(current==*start)
        {
            printf("deleted not possible before start node");
        }
        else if((*start)->next==current)
        {
            del_beg(start);

        }
        else
        {
            Node*prev=*start;
            current=(*start)->next;
            while(current->val!=val)
            {
                current=current->next;
                prev->next=current->next;
            }
            prev->next=current->next;
            printf("\n%d node deleted",current->next);
            free(current);
        }

    }

}
//count
int count(Node*start)
{
    int count=0;
    if(start==NULL)
        return 0;
    while (start!=NULL)
    {
        count++;
        start=start->next;
    }
    //printf("\nTotal nodes: %d",count);
    return count;
}

//Show Function
void show(Node*start)
{
    if(start==NULL)
    {
        printf("Empty List\n");
        return ;
    }
    printf("\nNode are\n");
    Node*temp=start;
    while(temp!=NULL)
    {
        printf("%d|%p\t",temp->val,temp->next);
        temp=temp->next;
    }
}

