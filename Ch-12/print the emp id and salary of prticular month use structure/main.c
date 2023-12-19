#include <stdio.h>
#include <stdlib.h>

struct data
{
    int id;
    char name[20];
};


int main()
{
    struct data emp;
    int b,salary,hour,month[12];

    printf("enter id & name of the emp:  \n");
    scanf("%d",&emp.id);
    scanf("%s",emp.name);

    printf("enter the salary per hour: \n");
    scanf("%d",&salary);
    printf("enter the total working hour pr day: ");
    scanf("%d",&hour);

    for(int i=1;i<=12;i++)
    {
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
        {
            month[i]=31*salary*hour;
            printf("the month is %d and the salary is %d\n",i,month[i]);
        }
        else if(i==4 || i==6 || i==9 || i==11)
        {
            month[i]=30*salary*hour;
            printf("the month is %d and the salary is %d\n",i,month[i]);
        }
        else
            {
                    month[i]=29*salary*hour;
                    printf("the month is %d and the salary is %d\n",i,month[i]);
            }

        }

        printf("\n");
        printf("enter month to get salary: ");
        scanf("%d",&b);

        printf("the salary is %d",month[b]);

    return 0;
}

