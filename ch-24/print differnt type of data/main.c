#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    printf("enter integer value: \n");
    scanf("%d",&n);
    printf("the int data is %d\n",n);
    printf("the int data converted in hex is %x\n",n);
    printf("the int data  converted in octal is %o\n",n);

    float a;
    printf("enter float value: \n");
    scanf("%f",&a);
    printf("the float data is %f\n",a);

    char b;
    printf("enter char value: ");
    scanf("\n%c",&b);
    printf("the char data is %c\n",b);

    double c;
    printf("enter double datatype value: \n");
    scanf("%lf",&c);
    printf("the double data is %.0lf\n",c);
 //   printf("the exponantial data is %e\n",n);

    long d;
    printf("enter long datatype value: \n");
    scanf("%ld",&d);
    printf("the long data is %ld\n",d);

    char e[100];
    printf("enter string: \n");
    scanf("%s",e);
    printf("the string is %s",e);

    return 0;
}
