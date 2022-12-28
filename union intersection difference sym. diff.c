#include "linklistheader.h"

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

int searchin(Node *start, int sval)
{
    Node *current  = start;
    while(current !=NULL)
    {
        if(current->val == sval)
            return 1;
        current = current->next;
    }
    return 0;
}


int main()
{
    Node *st1=initialize();
    Node *st2=initialize();
    Node *un=initialize();
    Node *inter=initialize();
    Node *dif=initialize();
    insert_beg(&st1,7);
    insert_beg(&st1,2);
    insert_beg(&st1,8);
    insert_beg(&st1,3);
    show(st1);
    printf("\nSORTED LINKLIST ST1:");
    sortlist(&st1);
    show(st1);
    insert_beg(&st2,9);
    insert_beg(&st2,2);
    insert_beg(&st2,8);
    insert_beg(&st2,1);
    printf("\n");
    show(st2);
    printf("\nSORTED LINKLIST ST2:");
    sortlist(&st2);
    show(st2);

    //UNION PROGRAM
    struct Node * t1 = st1, * t2 = st2;
    while (t1 != NULL)
    {
        insert_last( & un, t1 -> val);
        t1 = t1 -> next;
    }
    while (t2 != NULL)
    {
        if (!searchin(un, t2 -> val))
            insert_last( & un, t2 -> val);
        t2 = t2 -> next;
    }
    printf("\n\nUNION OF TWO LINKLIST IS:");
    show(un);
    printf("\n===================================================================================");

    //INTERSECTION PROGRAM
    struct Node * temp1 = st1;
    while (temp1 != NULL)
    {
        if (searchin(st2, temp1 -> val))
            insert_last( &inter, temp1 -> val);
        temp1 = temp1 -> next;
    }
    printf("\n\nINTERSECTION OF TWO LINKLIST IS:");
    show(inter);
    printf("\n==========================================================");

    //DIFFERENCE
    struct Node *temp2 = st1;
    while (temp2 != NULL)
    {
        if (searchin(st2, temp2 -> val))
            insert_last( &dif, temp2 -> val);
        temp2 = temp2 -> next;
    }
    printf("\n\nDIFFERENCE OF TWO LINKLIST IS:");
    show(dif);




}





