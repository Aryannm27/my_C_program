#include <stdio.h>
#include <math.h>

int main()
{
    int num1,num2,c;
    printf("enter num1 & num2: \n");
    scanf("%d %d",&num1,&num2);
    c=pow(num1,num2);               // find power using pow()
    printf("the result is %d",c);
    return 0;
}
