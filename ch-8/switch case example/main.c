#include <stdio.h>
#include <stdlib.h>


int main()
{
    char n;
    int a = -5;
    printf("choose no: A-name,B-adress,C-phone no.: ");
    scanf("%c",&n);
    switch(n)
    {
        case 'A': printf("1.aryan\n");
                printf("2.karan\n");
                printf("3.manan\n");
                printf("4.sunil\n");
                break;

        case 'B': printf("1.lalbaug\n");
                printf("2.bhavin society\n");
                printf("3.k k nagar road\n");
                printf("4.ghatlodiya\n");
                break;

        case 'C': printf("1.9909739493\n");
                printf("2.74567382930\n");
                printf("3.99090989898\n");
                printf("4.9879687687\n");
                break;

        default: printf("error");
                break;
    }

return 0;
}

