#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];
    printf("enter string: ");
    gets(name);
    printf("%s\n",name);

    for(int i=5;i>=0;i--)
    {
        printf("%c",name[i]);
    }

    return 0;
}
