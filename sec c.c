#include<stdio.h>
void main()
{
    float a;
    printf("enter values \n");
    scanf("%f",&a);
    if(a==100.52)
    {
        printf("value of cricket bat\n");
    }
    else if(a==500.25)
    {
        printf("value of football\n");
    }
    else if(a==200.00)
    {
        printf("value for guitar\n");
    }
    else
    {
        printf("it is invalid value\n");
    }
    return 0;
}
