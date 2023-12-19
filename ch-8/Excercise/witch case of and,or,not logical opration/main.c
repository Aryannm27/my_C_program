#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op,num1,num2,result;

    printf("enter num1 & num2 : \n");
    scanf("%d %d",&num1,&num2);

    printf("enter a operation(1.and,2,or,3.not): ");
    scanf("%d",&op);

    switch(op)
    {
        case 1: result=num1&&num2;
                printf("the result is %d",result);
                break;

        case 2: result=num1||num2;
                printf("the result is %d",result);
                break;

        case 3: result=(!num1);
                printf("the result is %d",result);
                break;

                default: printf("error");
                break;
    }
    return 0;
}
