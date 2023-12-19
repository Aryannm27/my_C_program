#include <stdio.h>
#include <stdlib.h>

void arrayInt()
{
    int a[5];
    printf("enter int array element: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
      for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }

}

void arrayChar()
{
    char a[5];
     printf("enter char array element: \n");

      for(int i=0;i<5;i++)
    {
        scanf("\n%c",&a[i]);
    }

      for(int i=0;i<5;i++)
    {
        printf("%c\n",a[i]);
    }
}


void arrayFloat()
{
    float a[5];
    printf("enter float array element: \n");

    for(int i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
    }
      for(int i=0;i<5;i++)
    {
        printf("a[%d]=%f\n",i,a[i]);
    }

}

int main()
{
    arrayInt();
    arrayChar();
    arrayFloat();
    return 0;
}



