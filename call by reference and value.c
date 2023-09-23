#include<stdio.h>
void main()
{
    int a=10,b=20;
    printf("before swap: %d %d\" ,a,b);
    swap(a,b);//swap method,and this is call by value

}
int swap(int a,int b)
{
    int udit;
    udit=a;
    a=b;
    b=udit;
    printf("after swap: %d %d",a,b);
}

