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
    insert_beg(&st2,25);
    insert_beg(&st2,20);
    insert_beg(&st2,15);
    printf("ST 1 CONTENT:");
    show(st1);
    printf("\nST 2 CONTENT:");
    show(st2);
    Node *current=st1;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=st2;
    printf("\nCONCATENATED LIST IS:");
    show(st1);

}
