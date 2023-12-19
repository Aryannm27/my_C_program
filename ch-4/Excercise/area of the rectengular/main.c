#include <stdio.h>
#include <stdlib.h>


float arearectengular(float length,float width)
{
    float c=length*width;
    return c;
}

int main()
{
    float area,length,width;
    printf("enter length and width of rectengular: \n");
    scanf("%f %f",&length,&width);
    area=arearectengular(length,width);
    printf("area of rectangular is %f\n",area);
    return 0;
}
