#include<stdio.h>
int main()
{
    int n,res;
    printf("enter number=\n");
    scanf("%d",&n);
    res=fact(n);
    printf("factorial %d",res);

}
int fact(int x)
{
    int res;
    if(x==0)
        res=1;
    else
        res=x*fact(x-1);

    return res;

}
