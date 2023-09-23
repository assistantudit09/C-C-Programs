#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a[50],pos,ele,i;


    printf("enter array size= ");
    scanf("%d",&n);
    printf("enter array elements= ");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("enter position= ");
    scanf("%d",&pos);
    n--;
    for(i=pos;i<=n;i++)
        a[pos-1]=a[i];
    printf("output array= ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }


    return 0;





}
