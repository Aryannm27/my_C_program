#include <stdio.h>
#include <stdlib.h>
void printInt(int a)
{
    printf(" the value of int %d\n",a);
    printf("\n");
}

void printFloat(float b)
{
    printf("the value of float %f\n",b);
    printf("\n");
}

void printChar(char c)
{
    printf("the value of char %c\n",c);
    printf("\n");
}

void printstr(char str[])
{
    printf("the value of string %s\n",str);
    printf("\n");
}


int main()
{
   int a;
   float b;
   char c;
   char str[20];

   printf("enter int value of : ");
   scanf("%d",&a);
   printInt(a);

   printf("enter float value of : ");
   scanf("%f",&b);
   printFloat(b);

   printf("enter char value of : ");
   scanf("\n%c",&c);
   printChar(c);

   printf("enter string : ");
   scanf("\n%s",str);
   printstr(str);


   return 0;
}
