#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],*p=0,z=0,max=0,min=0;
    p=&a[0];

    printf("enter five element : \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    max=min=a[0];

      for(int i=0;i<5;i++)
    {
        max=(max>*(p+i)?max:*(p+i));
        min=(min<*(p+i)?min:*(p+i));
    }

    printf("max is %d\n",max);
    printf("min is %d\n",min);

    z=max-min;
    printf("the difference between max and min is %d",z);

    return 0;
}

