#include <stdio.h>
#include <stdlib.h>

/*
int a=12;               // global declaration of a variabl
int main()
{
    int a;                      // local declartion of a variable
    printf("enter a value: ");
    scanf("%d",&a);
    printf("%d\n",a);

    {   int a=60;
        printf("%d\n",a);
        printdata(a);
    }
   printdata(a);
}

int printdata(a)
{
    printf("%d\n",a);
    return a;
}
*/

int main()
{
    //char i;
   /* for(i='A';i<='Z';i++)
    {
        printf("%c\n",i);
        i++;
        i++;
    }*/


    char i='A';
    while(i<='Z')
    {
        printf("%c\n",i);
        i+=3;
    }

return 0;
}


