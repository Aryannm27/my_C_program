#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[]={"hello"};
    printf("the size of array is %d\n",sizeof(a));
    for(int i=0;i<5;i++)
    {
        printf("the char is : %c\n",a[i]);
    }
    return 0;
}
