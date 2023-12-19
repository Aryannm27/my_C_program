#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  char a[7];
    scanf("%s",&a);
    for(int i=0;i<7;i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    char *b;
    b=(char *)malloc(5);

    scanf("%s",&a);

    for(int i=0;i<12;i++)
    {
        printf("%c",a[i]);
    }
*/

    int a[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
        for(int i=0;i<3;i++)
    {
        printf("%d\n",a[i]);
    }

    int *c;
    c=(int *)malloc(3);

    for(int i=0;i<6;i++)
    {
        scanf("%d",&c[i]);
    }
         for(int i=0;i<6;i++)
    {
        printf("%d\n",c[i]);
    }

    return 0;
}
