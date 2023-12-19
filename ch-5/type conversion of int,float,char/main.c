#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b;
    char d;
    printf("enter int number: ");
    scanf("%d",&a);
    printf("enter float number: ");
    scanf("%f",&b);
    printf("int data: %d\n",a);
    printf("float data: %f\n",b);

    b=(float)a;                                                   // type conversion int to float data
    printf("the conversion int to float data is %f\n",b);

    a=(int)b;                                                     //type conversion float to int data
    printf("the conversion int to float data is %d\n",a);

    printf("enter char number: \n");
    scanf("\n%c",&d);
    printf("char data : %c\n",d);

    a=(int)d;                                                      ////type conversion char to int data
    printf("the type conversion char to int is : %d",a);

}
