#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("enter number: ");
    scanf("%f",&a);
    printf("%f\n",a);  // print float number by user

    double b;
    printf("enter number: ");
    scanf("%lf",&b);
    printf("%lf\n",b);        //print double type number by user

    printf("%e\n",b);         //print exponantial number

    return 0;
}

