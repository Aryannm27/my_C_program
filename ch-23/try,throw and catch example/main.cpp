#include <iostream>

using namespace std;

int main()
{
    float a,b,z;
    printf("enter a & b:  \n");
    scanf("%f %f",&a,&b);
    try{
            if(b==0)
            {
                z=a/b;
                throw z;
            }
        }
    catch(float z)
    {
        printf("the divided by zero");
        return z;
    }
    z=a/b;
    printf("the div is %f",z);

    return 0;
}
