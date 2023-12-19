#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char month[12][4]={"jan","fab","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};

  //  char a[12][10];

     for(int i=0;i<12;i++)
     {
             scanf("\n%s",&a[i]);
     }


     printf("enter number 1-12 to print the month: \n");
     scanf("\n%d",&n);

        if(n--)
        {
           printf("the month name is %s",month[n]);
        }
        else
        {
            printf("you have entered wrong month");
        }

    return 0;
}


/*
int data(int *a)
{
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    return a;
}

int main()
{
    int *p;
    data(p);

    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
    return 0;
}
*/

//char array and size return from function to main//

/*
char* data(int *c)
{
    static char a[]="HARDIKkdknknefknkfnkdn12123ccffdfd";
    *c=strlen(a);
    return a;
}

int main()
{
    char *p;
    int c;
    p=data(&c);
    for(int i=0;i<c;i++)
    {
        printf("%c",*(p+i));
    }
    return 0;
}
*/

