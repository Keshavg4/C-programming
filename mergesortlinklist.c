#include "linklistheader.h"
//MERGE SORT
//FIND A MIDDLE NODE OF ANY LINKLIST.....?????

void split(Node *start,Node **list1,Node **list2)
{
    Node *fast;
    Node *slow;
    fast=start->next;
    slow=start;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
    }
    *list1=start;
    *list2=slow->next;
    slow->next=NULL;
}

//MERGE SORT FUNCTION
Node *mergesortlist(Node *list1,Node *list2)
{
    Node *result;
    if(list1==NULL)
        return list2;
    if(list2==NULL)
        return list1;
    if(list1->val<=list2->val)
    {
        result=list1;
        result->next=mergesortlist(list1->next,list2);
    }
    else
    {
        result=list2;
        result->next=mergesortlist(list1,list2->next);
    }
    return result;
}

//MERGE SORT
void mergesort(Node**start)
{
    if(*start==NULL || (*start)->next==NULL)
        return;
    Node*list1;
    Node*list2;
    split(*start,&list1,&list2);
    mergesort(&list1);
    mergesort(&list2);
    *start=mergesortlist(list1,list2);
}

int main()
{
    Node *st = initialize();
    insert_beg(&st,1);
    insert_last(&st,5);
    insert_last(&st,4);
    insert_last(&st,9);
    insert_last(&st,7);
    insert_last(&st,6);
    printf("BEFORE SORTING:");
    show(st);
    mergesort(&st);
    printf("\nAFTER SORTING MERGE SORT:");
    show(st);
}
