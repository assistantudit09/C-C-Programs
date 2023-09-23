#include<stdio.h>
int main()
{
    int n,res;
    printf("enter number=\n");
    scanf("%d",&n);
    res=fact(n);
    printf("factorial=%d\n",res);

}
int fact(int u)
{
    int res;
    if(u==0)
        res=1;
    else
        res=u*fact(u-1);

        return res;

}
