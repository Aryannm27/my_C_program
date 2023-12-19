#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>


int main()
{
 /*   struct tm t;
    t.tm_hour=12;
    t.tm_yday=10;
    t.tm_sec=23;
    t.tm_year=122;
    t.tm_min=22;
    t.tm_mon=2;
    t.tm_mday=10;
    t.tm_wday=2;
    printf("%s",asctime(&t));*/

 /*   time_t a,b;
    double c;
    a=clock();
    char str[10],str1[10];
    printf("enter string: \n");
    scanf("%s",str);
    printf("the string copy to str1 is %s\n",strcpy(str1,str));
    b=clock();
    c =(difftime(b,a)/CLOCKS_PER_SEC);
    printf("the time taken is %lf",c);*/

 /*   struct tm *ptr;
    time_t t;
    t=time(NULL);
    printf("%s\n",ctime(&t));
    ptr=localtime(&t);
    ptr=gmtime(&t);
    printf("%s\n",asctime(ptr));
*/

/*    struct tm *ptr;
    time_t t;
    char str[20];
    t=time(NULL);
    ptr=localtime(&t);
    strftime(str,20,"%d/%m/%y",ptr);
    printf("the format is %s",str);
*/

  /*  struct tm *ptr;
    time_t t;
    t=time(NULL);
    ptr=localtime(&t);
    printf("%ld",mktime(ptr));
    */

    return 0;
}














