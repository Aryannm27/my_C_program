#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter decimal number: ");
    scanf("%d",&a);
    printf("the data is %d\n",a);

    printf("the octal conversion of data is %o\n",a);       // octal conversion

    printf("the hex conversion of data is %x\n",a);         // hex conversion

    return 0;
}
