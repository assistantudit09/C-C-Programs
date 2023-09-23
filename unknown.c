#include<stdio.h>
int main()
{
    int a=8;
    printf("enter value\n");
    scanf("%d",&a);
    if(a<7)
    {
        printf("'a' less than 7");
    }
    else if(a==10)
    {
        printf("'a' is equal to 10");

    }
    else if(a>6)
    {
        printf("'a' is greater then 6");

    }
    else
    {
        printf("the condition is false\n ");
    }
    return 0;
}
