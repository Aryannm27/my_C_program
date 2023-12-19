#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[]={"www.google.com"};
    int i=0;

    while(i<sizeof(a))
          {
            while(a[i]!='.' && i<sizeof(a))
                {
                    printf("%c",a[i]);
                    i++;
                }
                printf("\n");
                i++;
          }
   return 0;
}
