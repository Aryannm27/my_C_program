#include <stdio.h>
#include <stdlib.h>
/*
struct data
{
    int n;
    float roi;
};

int main()
{
    struct data s1;
    float interest,sum=0,total;

    printf("enter the amount: ");
    scanf("%d",&s1.n);
    printf("enter the roi: ");
    scanf("%f",&s1.roi);

    for(int i=1;i<=12;i++)
    {
        interest=(s1.n*s1.roi/100);
        printf("the month is %d and the intrest is %.2f\n",i,interest);
        sum=sum+interest;
    }

    total=sum+s1.n;
    printf("the total interest is %f\n",sum);
    printf("the total amount aftrer 12 months is %.2f\n",total);

    return 0;
}
*/


struct date{
    int date;
    int month;
    int year;
};

int main()
{
    struct date d1[2];
    int i,j=1,x=2;

    for(int i=0;i<=1;i++)
    {
            printf("enter the date : ");
            scanf("%d",&d1[i].date);
            printf("enter the month : ");
            scanf("%d",&d1[i].month);
            printf("enter the year : ");
            scanf("%d",&d1[i].year);
            printf("\n");
    }


 label3:   if(d1[0].date>31 || d1[0].month>12 || d1[0].year>2022)
            {
                printf("you are entered Invalid date %d\n",j);
                i=0;
                goto label;
            }
 label2:    if(d1[1].date>31 || d1[1].month>12 || d1[1].year>2022)
            {
                printf("you are entered Invalid date %d\n",x);
                i=1;
                goto label1;
            }

            if((d1[0].date<=31 && d1[0].month<=12 && d1[0].year<=2022) || (d1[1].date>=31 && d1[1].month>=12 && d1[1].year>=2022 ))
            {
                goto label5;
            }

 label:   printf("enter the date : ");
            scanf("%d",&d1[i].date);
            printf("enter the month : ");
            scanf("%d",&d1[i].month);
            printf("enter the year : ");
            scanf("%d",&d1[i].year);
            printf("\n");
            goto label3;

  label1:   printf("enter the date : ");
            scanf("%d",&d1[i].date);
            printf("enter the month : ");
            scanf("%d",&d1[i].month);
            printf("enter the year : ");
            scanf("%d",&d1[i].year);
            printf("\n");
            goto label2;


  label5:  for(int i=0;i<2;i++)
    {
    printf("date %d: %d/%d/%d\n",i+1,d1[i].date,d1[i].month,d1[i].year);
    }

        if(d1[0].date==d1[1].date)
        {
            if(d1[0].month== d1[1].month)
                {
                    if(d1[0].year==d1[1].year)
                    {
                        printf("both date is same \n");
                    }
                    else
                    {
                        printf("both date is not same \n");
                    }
                }
                else
                {
                    printf("date is not same \n");
                }
        }
        else
        {
            printf("date is not same \n");
        }


return 0;
}



/*
struct date{
    int date;
    int month;
    int year;
};

int main()
{
    struct date d1[2];

    for(int i=0;i<=1;i++)
    {
            printf("enter the date : ");
            scanf("%d",&d1[i].date);
            printf("enter the month : ");
            scanf("%d",&d1[i].month);
            printf("enter the year : ");
            scanf("%d",&d1[i].year);
            printf("\n");
    }


 label:    if(d1[0].date>31)
        {
            printf("you have entered Invalid date: \n");
            printf("enter the date1 : ");
            scanf("%d",&d1[0].date);
        }
       if(d1[0].month>12)
        {
            printf("you have entered Invalid month: \n");
            printf("enter the month1 : ");
            scanf("%d",&d1[0].month);
        }
       if(d1[0].year>2022)
        {
            printf("you have entered Invalid year: \n");
            printf("enter the year1 : ");
            scanf("%d",&d1[0].year);
        }
        if((d1[0].date<=31 && d1[0].month<=12 && d1[0].year<=2022) && (d1[1].date<=31 && d1[1].month<=12 && d1[1].year<=2022))
        {
            goto label11;
        }
        if(d1[0].date<=31 && d1[0].month<=12 && d1[0].year<=2022)
        {
            goto label9;
        }
        goto label;


 label2: if(d1[1].date>31)
        {
            printf("you have entered Invalid date: \n");
            printf("enter the date2 : ");
            scanf("%d",&d1[1].date);
        }
        if(d1[1].month>12)
        {
            printf("you have entered Invalid month: \n");
            printf("enter the month2 : ");
            scanf("%d",&d1[1].month);
        }
        if(d1[1].year>2022)
        {
            printf("you have entered Invalid year: \n");
            printf("enter the year2 : ");
            scanf("%d",&d1[1].year);
        }
        if((d1[0].date<=31 && d1[0].month<=12 && d1[0].year<=2022) && (d1[1].date<=31 && d1[1].month<=12 && d1[1].year<=2022))
        {
            goto label11;
        }
        if(d1[1].date<=31 && d1[1].month<=12 && d1[1].year<=2022 )
        {
            goto label5;
        }
        goto label2;


        label5: if(d1[1].date<=31 && d1[1].month<=12 && d1[1].year<=2022)
        {
            goto label;
        }
        label9:if(d1[0].date<=31 && d1[0].month<=12 && d1[0].year<=2022 )
        {
           goto label2;
        }

 label11 : for(int i=0;i<2;i++)
    {
    printf("date %d: %d/%d/%d\n",i+1,d1[i].date,d1[i].month,d1[i].year);
    }

        if(d1[0].date==d1[1].date)
        {
            if(d1[0].month== d1[1].month)
                {
                    if(d1[0].year==d1[1].year)
                    {
                        printf("both date is same \n");
                    }
                    else
                    {
                        printf("both date is not same \n");
                    }
                }
                else
                {
                    printf("date is not same \n");
                }
        }
        else
        {
            printf("date is not same \n");
        }


return 0;
}
*/

/*
struct data
{
    char id[10];
};

int main()
{
    struct data d={"1234D"};
    int a=0;

    while(1)
    {
        printf("enter id :  ");
        scanf("%s",&d.id);

        a=0;
     for(int i=0;i<=strlen(d.id);i++)
     {
         if((d.id[i]>='A' && d.id[i]<='Z') || (d.id[i]>='a' && d.id[i]<='z'))
         {
             a++;
         }
         if(a==1)
         {
             break;
         }
     }

     if(a==0)
     {
         break;
     }



    }
}
*/
