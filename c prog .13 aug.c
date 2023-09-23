#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,newn,sum=0;
    printf("how many numbers u will take=");
    scanf("%d",&n);
    printf("enter those numbers=\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&newn);
        sum=sum+newn;


    }
    printf(" sum is=%d",sum);

}



