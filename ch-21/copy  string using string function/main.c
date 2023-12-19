#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[10],str1[10];
    printf("enter string: \n");
    scanf("%s",&str);
    printf("the string copy to str1 is %s",strcpy(str1,str));
    return 0;
}






