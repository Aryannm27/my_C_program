#include <stdio.h>
#include <stdlib.h>

struct data
{
    char name[20];
    double callno;
};

int main()
{
    struct data *p;
    int n;

    printf("enter the no. of student : \n");
    scanf("%d",&n);

    p=(struct data* )calloc(n,sizeof(struct data));

    for(int i=1;i<=n;i++)
    {
        printf("enter data %d name&callno:  \n",i);
        scanf("%s",(p+i)->name);
        scanf("%lf",&(p+i)->callno);
    }
    z=fun(p);

      for(int i=1;i<=n;i++)
    {
        printf("data %d\n",i);
        printf("name: %s\n",(p+i)->name);
        printf("mobile no:%.0lf\n",(p+i)->callno);
    }

    return 0;
}



//double pointer access structure
/*
struct data
{
    char name[20];
    double callno;
};

int main()
{
    struct data **p,*z;
    int n;

    printf("enter the no. of student : \n");
    scanf("%d",&n);

    p=(struct data*)calloc(n,sizeof(struct data));
    //z = &p;

    for(int i=1;i<=n;i++)
    {
        printf("enter data %d name&callno:  \n",i);
        scanf("%s",((struct data *)p+i)->name);
        scanf("%lf",&((struct data *)p+i)->callno);
    }
      for(int i=1;i<=n;i++)
    {
        printf("data %d\n",i);
        printf("name: %s\n",((struct data *)p+i)->name);
        printf("mobile no:%.0lf\n",((struct data *)p+i)->callno);
    }

  //  for(int i=0;i<=n;i++)
  //  {
  //      printf("%d\n",((struct data *)p+i));
  //  }

    return 0;
}
*/

/*
struct data* ascending(int *p,int n)
{
    int tmp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if( *(p+i) > *(p+j))
            {
                tmp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tmp;
            }
        }
    }
    return p;
}


//ascending order via structure and malloc
struct data
{
    int a;
};

int main()
{
    int n;
    printf("enter number to find max or min : \n");
    scanf("%d",&n);
    struct data a[n],*p,*z;
    p=((struct data *)calloc(n,sizeof(struct data)));

    for(int i=0; i<n; i++)
    {
        scanf("%d",&(p+i)->a);
    }

    z=ascending(p,n);
    printf("ascending order \n");
    for(int i=0;i<n;i++)
    {
       printf("%d\n",*(z+i));
    }
    return 0;
}
*/
