#include<stdio.h>
#include<stdlib.h>
struct emp
{
    int eno;
    char ename;
    int esal;
};
void main()
{
    struct emp *udit;
    udit=(struct emp*)malloc(5*sizeof(struct emp));//here we allocate memory.
    if(udit==NULL)
        printf("error occured\n");
    else
        printf("enter emp details=\n");
        scanf("%d %s %d",&udit->eno,&udit->ename,&udit->esal);
        printf("%d %s %d",udit->eno,udit->ename,udit->esal);


        return 0;

}
