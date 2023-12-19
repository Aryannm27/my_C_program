#include <stdio.h>
#include <stdlib.h>


struct student
{
    char name[10];
    int rollno;
};

int main()
{
    FILE *fp;
    fp=fopen("Allinone.txt","w");
    int x,y,z;
    printf("enter x,y,z:  \n");
    scanf("%d %d %d",&x,&y,&z);
    fprintf(fp,"x-%d  y-%d z-%d\n",x,y,z);

    if(x>y)
    {
        if(x>z)
        {
            fprintf(fp,"the biggest no is %d\n",x);
        }
        else
        {
            fprintf(fp,"the biggest no is %d\n",z);
        }
    }
    else
    {
        if(y>z)
        {
            fprintf(fp,"the biggest no is %d\n",y);
        }
        else
        {
            fprintf(fp,"the biggest no is %d\n",z);
        }
    }

    fprintf(fp,"the x+y is %d\n",x+y);
    fprintf(fp,"the y+z is %d\n",y+z);
    fprintf(fp,"the x+z is %d\n",x+z);
    fprintf(fp,"the x*y is %d\n",x*y);
    fprintf(fp,"the y*z is %d\n",y*z);
    fprintf(fp,"the x*z is %d\n",x*z);
    fprintf(fp,"the x&y is %d\n",(x&y));
    fprintf(fp,"the x|y is %d\n",(x|y));

    struct student *p;

    int n;
    printf("enter no of student : \n");
    scanf("%d",&n);
    p=(struct student*)malloc(n*sizeof(struct student));

    for(int i=1;i<=n;i++)
    {
        printf("enter name & roll no of student %d: \n",i);
        scanf("%s",(p+i)->name);
        scanf("%d",&(p+i)->rollno);
    }

     for(int i=1;i<=n;i++)
    {
        fprintf(fp,"data of student : %d\n",i);
        fprintf(fp,"the name is %s\n",(p+i)->name);
        fprintf(fp,"roll no is %d\n",(p+i)->rollno);
    }

    return 0;
}













