#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[5];

     for (int i=0;i<5;i++)
    {
        scanf("\n%c",&str[i]);
    }

     for (int i=0;i<5;i++)
    {
        printf("%c\n",str[i]);
    }
    return 0;
}
