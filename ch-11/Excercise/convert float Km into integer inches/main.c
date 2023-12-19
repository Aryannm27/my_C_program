#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*int main()
{
    float a,b;
    int x;
    printf("enter kilometer: \n");
    scanf("%f",&a);
    printf("you have enterd km: %f\n",a);

    b=a*100000*0.394;
    x=(int)b;

    printf("the km converted in inch is %d\n",x);
    return 0;
}
*/

/*int data()
{
    int a[5] = {2,4,3,5,6};
    return a;
}

int main()
{
    int *p;
    p=data();
    for(int i=0;i<5;i++){
        printf("%d\n",p[i]);
    }
    return 0;
}*/


/*struct DATA{
    int roll;
    char a;
};

int main()
{
    struct DATA a;
    printf("%d",sizeof(struct DATA));
    return 0;
}*/


int main()
{
 /*   char a[50];
    int n,temp;
    gets(a);
    n= strlen(a) - 1;
    for(int i=0;i<strlen(a)/2;i++){
        temp = a[i];
        a[i] = a[n];
        a[n--] = temp;
    }
    printf("string is %s",a);*/

  /*  int a ,b,c , g , d ,e ,f ;
    printf("enter number : \n");
    scanf("%d",&a);
    printf("enter a bit to set \n");
    scanf("%d",&b);
    printf("enter clear bit \n");
    scanf("%d",&c);
    printf("enter toggle bit \n");
    scanf("%d",&g);
    d = a | (1<<b-1);
    printf("the  set0 value is %d",d);
    e = a & (~(1<<c-1));
    printf("the clearvalue is %d",e);
    f  =  a ^ (1<<g-1);
    printf("the toggle value is %d",f);*/


  /*  int a[10];
    int temp ;

    printf("enter array\n");
    for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
    }

   for(int i=0;i<10;i++)
    {
       for(int j=i+1;j<10;j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


    for(int i=0;i<10;i++){
        printf("the desending order is %d\n",a[i]);

    }
*/

 /*   int num1,num2,result=0;//variable declaration
    // from the user - input from keyboard
    printf("Enter two number for input: ");
     scanf("%d %d",&num1,&num2);//Reading the input for num1 and num2
     while(num1>=num2) {
            num1=num1-num2;
     result++;
     }
     printf("Division is: %d",result);*/

      for(1;2;3)
      printf("Hello");

    return 0;
}
