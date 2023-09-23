#include<stdio.h>
#include<stdlib.h>  v
int main()
{
    int n,*arr;
    printf("enter array size=\n");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));

    if(arr==NULL)
        printf("error occured\n");
    else
       printf("array elements=\n");

       for(int i=0;i<5;i++)
       {
           printf("%d",*(arr+i));
       }
}
