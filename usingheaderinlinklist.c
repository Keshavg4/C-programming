#include "linklistheader.h"

int main()
{
    Node *list1 = initialize();
    insert_beg(&list1,10);
    insert_beg(&list1,20);
    insert_last(&list1,30);
    insert_last(&list1,40);
    insert_beg(&list1,50);
    show(list1);
    printf("\n===========================================================================");

    del_beg(&list1);
    del_beg(&list1);
    show(list1);
    printf("\n===========================================================================");

    del_last(&list1);
    del_last(&list1);
    show(list1);
    printf("\n===========================================================================");

    insert_pos(&list1,1,5);
    show(list1);
    insert_pos(&list1,3,25);
    show(list1);
    insert_pos(&list1,3,15);
    show(list1);
    printf("\n===========================================================================");

    insert_after(&list1,10,12);
    show(list1);
    insert_after(&list1,25,50);
    show(list1);
    printf("\n====================================================================================================");

    insert_before(&list1,5,80);
    show(list1);
    insert_before(&list1,80,90);
    show(list1);
    printf("\n============================================================================================================");

    del_after(&list1,5);
    show(list1);
    printf("\n===============================================================================================================");

    del_before(&list1,80);
    show(list1);
    printf("\n=======================================================================================================");


}
