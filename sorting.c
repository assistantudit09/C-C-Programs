#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;

    printf("enter the total number of elements=\n");
    scanf("&d",n);

    printf("enter the array elements=\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);


    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-1;j++)
        {
            if(a[j]>a[j+1])
            {


                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

   printf("in asending order=\n");
    for(i=0;i<n;i++)
   printf("%d  ",a[i]);
      printf("\n");

return 0;

}
