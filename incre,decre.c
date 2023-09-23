#include<stdio.h>
int main()
{
    int a=1,b;
    //b=++a + ++a;//
     //b=++a + a++;//
     b=++a + a++ + ++a;

    printf("a is %d\n",a);
    printf("b is %d\n",b);
    return 0;
}
