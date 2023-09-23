 #include<stdio.h>
int swap(int*,int*);//prototype //first memory crated,
int main()
{
    int a ,b;
    printf("enter two number= ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);  //call by reference(pointer)
}
int swap(int *x,int *y) //2nd memory created,
{
    int sahil;
    sahil=*x;
    *x=*y;
    *y=sahil;
    printf("afetr swap= %d %d",*x,*y);

}

