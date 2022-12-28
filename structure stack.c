#include<stdio.h>
struct student
{
    char name[20];
    char branch[2];
    char id[20];
    int rollNo;
    char section;
    float cgpa;
};

//STURCTURE USING FUNCTION
void show(struct student temp)
{
    printf("================================\n");
    printf("========STUDENTS DETAILS========\n");
    printf("NAME: %s\n",temp.name);
    printf("ROLL NO.: %d\n",temp.rollNo);
    printf("BRANCH: %s\n",temp.branch);
    printf("ID: %s\n",temp.id);
    printf("SECTION: %c\n",temp.section);
    printf("CGPA: %f\n",temp.cgpa);
}

int main()
{
    struct student s1[2];
    for(int i=0;i<2;i++)
    {
        fflush(stdin);
        printf("Enter The Name: ");
        gets(s1[i].name);
        fflush(stdin);
        printf("Enter The Branch: ");
        gets(s1[i].branch);
        printf("Enter The ID: ");
        gets(s1[i].id);
        printf("Enter The Section: ");
        scanf("%c",&s1[i].section);
        fflush(stdin);
        printf("Enter The RollNo.: ");
        scanf("%d",&s1[i].rollNo);
        fflush(stdin);
        printf("Enter The CGPA: ");
        scanf("%f",&s1[i].cgpa);
    }
    for(int j=0;j<2;j++)
    {
        show(s1[j]);
    }
    //CALLING THE FUNCTION
    //show(s1);
    //NORMAL PRINTING
    //printf("NAME: %s\n",s1.name);
    //printf("ROLL NO.: %d\n",s1.rollNo);
    //printf("BRANCH: %s\n",s1.branch);
    //printf("ID: %s\n",s1.id);
    //printf("SECTION: %c\n",s1.section);
    //printf("CGPA: %f\n",s1.cgpa);
}
