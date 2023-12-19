#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int rollno;
};

int main()
{
    int n;
    printf("enter the number of student: \n");
    scanf("%d",&n);

    struct student s1[n];

    printf("print the student name,age,marks: \n");

    for(int i=0;i<n;i++)
    {
        printf("name:  ");
        scanf("%s",s1[i].name);
        printf("rollno:  ");
        scanf("%d",&s1[i].rollno);
    }

    for(int i=0;i<n;i++)
    {
        printf("name : %s  ",s1[i].name);
        printf("rollno  : %d\n",s1[i].rollno);
    }
    return 0;
}

/*
struct student
{
    char name[20];
    int rollno;
};


struct student* data(int *c)
{
    int n;
    printf("enter no of student : \n");
    scanf("%d",&n);
    *c=n;
    struct student *p;
    p=(struct data *)calloc(n,sizeof(struct data *));


    struct student p[n];

    for(int i=0;i<n;i++)
    {
        printf("name:  ");
        scanf("%s",p[i].name);
        printf("rollno:  ");
        scanf("%d",&p[i].rollno);
    }
    return p;
}

int main()
{
    struct student *s;
    int c;
    s=data(&c);
    for(int i=0;i<c;i++)
    {
        printf("name : %s  ",s->name);
        printf("rollno  : %d\n",s->rollno);
    }
    return 0;
}
*/
*/
