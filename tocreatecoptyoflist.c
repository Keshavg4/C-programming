#include "linklistheader.h"
int main()
{
    Node *st1=initialize();
    Node *st2=initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    printf("st1 content:\n");
    //show(st1);
    Node *temp=st1;
    while(temp!=NULL)
    {
        printf("%d|%p\t",temp->val,temp->next);
        insert_last(&st2,temp->val);
        temp=temp->next;
    }
    printf("\nCopied list\n");
    show(st2);


}
