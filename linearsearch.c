//implementation of linear search using link list
#include "linklistheader.h"
int main()
{
    Node *st1=initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    show(st1);
    int a;
    printf("\nENTER THE VALUE:");
    scanf("%d",&a);
    Node*current=st1;
    while(current!=NULL)
    {
        if(current->val==a)
        {
            printf("FOUND\n");
            break;
        }
        current=current->next;
        if(current==NULL)
        {
            printf("\nNOT FOUND");
        }
    }

}
