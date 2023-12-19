#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    float avg,p;
    printf("enterd the no. of student: ");
    scanf("%d",&n);

    int marks[n];
    printf("enter the marks of maths: \n");

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&marks[i]);
    }

     for(int i=1;i<=n;i++)
    {
        printf("the student %d marks is %d\n",i,marks[i]);
    }

    printf("enter the student number to get avg marks: ");
    scanf("%f",&p);

    for(int i=0;i<p;i++)
    {
        printf("student : ");
        scanf("%d",&n);
        sum=sum+marks[n];
        avg=sum/p;
    }

    printf("the avg marks of maths is %f",avg);

   return 0;
}
