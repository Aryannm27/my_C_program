#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    float b;

    for(b=1;b<=10;b++)
   {
        printf("float-%f\n",b);
   }
       for(i=1;i<=10;i++)
   {
        printf(" octal-%o   hex-%x\n",i,i);
   }
    return 0;
}
