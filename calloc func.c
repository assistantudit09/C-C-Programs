#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,*udit;
    printf("enter array size=\n");
    scanf("%d",&a);
    udit=(int*)calloc(a,sizeof(int));
    if(udit==NULL)
        printf("memory not allocated\n");
    else
        printf("array elements=\n");

    for(int i=0;i<5;i++)
    {
        printf("%d",*(udit+i));
    }

}
