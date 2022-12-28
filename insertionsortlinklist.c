#include "linklistheader.h"
//INSERTION SORT
//FUNCTION FOR INSERTION WHILE SORTING
void helper(Node**start,Node*newNode)
{
    if(newNode->val < (*start)->val)
    {
        newNode->next=*start;
        *start=newNode;
    }
    else
    {
        Node*current=(*start)->next;
        Node *prev=*start;
        while(current!=NULL)
        {
            if(current->val > newNode->val)
            {
                break;
            }
            current=current->next;
            prev=prev->next;
        }
        newNode->next=prev->next;
        prev->next=newNode;
    }
}

//SORTING FUNCTION
void sortlist(Node **start)
{
    Node *start2=*start;
    *start=(*start)->next;
    start2->next=NULL;
    while(*start!=NULL)
    {
        Node *temp=*start;
        *start=(*start)->next;
        temp->next=NULL;
        helper(&start2,temp);
    }
    *start=start2;
}
int main()
{
    Node *st = initialize();
    insert_beg(&st,9);
    insert_last(&st,7);
    insert_last(&st,2);
    insert_last(&st,5);
    insert_last(&st,4);
    printf("BEFORE SORTING:");
    show(st);
    sortlist(&st);
    printf("\n===========================================================================");
    printf("\nSORTED LIST IS:");
    show(st);
    printf("\n===========================================================================");


}
