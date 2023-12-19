#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=1;i<=10;i++)
    {
        if(i<=5)
        {
            printf("%d\n",i);
        }
        else
        {
            goto label;                           // goto statement transfer control to the label name branch.
            printf("hello world");
        }
    }

    label:  printf("hello world");

    return 0;
}
