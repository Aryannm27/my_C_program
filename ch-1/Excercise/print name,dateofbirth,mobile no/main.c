#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("my name is Aryan\n");

   int a,b,c;
   printf("enter your birth date,month,year: \n");
   scanf("%d %d %d",&a,&b,&c);
   printf("your birthdate is %d/%d/%d\n",a,b,c);

   long double z;
   printf("enter your mobile no: ");
   scanf("%lf",&z);
   printf("your mobile no. is %.0lf\n",z);

   return 0;
}
