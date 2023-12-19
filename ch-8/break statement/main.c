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
            break;
            printf("hello world");                      // break is using for break the loop and exit loop
        }
    }
    return 0;
}
