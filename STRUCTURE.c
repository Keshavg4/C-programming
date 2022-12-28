#include<stdio.h>
struct student
{
    char name[20];
    char branch[5];
    char section;
    int year;
    char grade;
};
int main()
{
    struct student s[2];
    for (int i=0;i<2;i++)
    {
        printf("Enter Name: ");
        gets(s[i].name);
        printf("Enter Branch: ");
        gets(s[i].branch);
        printf("Enter Section: ");
        scanf("%c",&s[i].section);
        fflush(stdin);
        printf("Enter Grade: ");
        scanf("%c",&s[i].grade);
        fflush(stdin);
        printf("Enter The Year: ");
        scanf("%d",&s[i].year);
        fflush(stdin);
    }
    for (int i=0;i<2;i++)
    {
        printf("NAME :%s \n",s[i].name);
        printf("BRANCH :%s \n",s[i].branch);
        printf("SECTION :%c \n",s[i].section);
        printf("GRADE :%c \n",s[i].grade);
        printf("YEAR :%d \n",s[i].year);
    }

}
