int hour(int s)
{
    int c;
    c=s/3600;
    return c;
}

int minute(int s)
{
    int c;
    s=s%3600;
    c=s/60;
    return c;
}

int second(int s)
{
    int c,d;
    s=s%3600;
    c=s%60;
    return c;
}

int main()
{
    int s,a,b,c;
    printf("enter the second value:  \n");
    scanf("%d",&s);
    printf("you have enterd the second is %d\n",s);
    a=hour(s);
    printf("hour= %d  ",a);
    b=minute(s);
    printf("minute= %d ",b);
    c=second(s);
    printf("second= %d ",c);
    return 0;
}
