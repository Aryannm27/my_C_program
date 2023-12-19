#include <stdio.h>
#include <stdlib.h>

int main()
{
    int password=3355;

 label:   printf("enter four digit password: \n");
          scanf("%d",&password);

        if(password==3355)
        {
            printf("password is correct.\n");

        }
        else
        {
            printf("password is incorrect.\n");
            goto label;
        }

  return 0;
}
