#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a,b;
    printf("enter two char: \n");
    scanf("%c %c",&a,&b);
    printf("the char is %c and %c\n",a,b);

    if(a==b)
    {
        printf("the a is equal to b\n");
    }
    else
    {
        printf("the a is not equal to b");
    }
    return 0;
}
