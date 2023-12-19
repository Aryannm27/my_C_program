#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("enter char : ");
    scanf("%c",&a);
    printf("the char is %c\n\n",a);  // print char

    printf("the ascii value of char is %d\n\n",a);  //print ascii value

    printf("the value of add in char is %c\n\n",a+1); // print add 1 to chaar

    printf("the sub of char is %d\n\n",'b'-'a');  // print char sub get ascii value

    return 0;
}
