/*#include<iostream>
using namespace std;

float divi(float j,float k);// prototype of divi

int multi(int x,int y);//prototype of multi

int substract(int p,int q)
{
    int r=p-q;
    return r;
}

int sum(int a,int b)
{
    int c=a+b;
    return c;

}

int main()
{
    int num1,num2;

    cout<<"enter two numbers= "<<endl;
    cin>>num1>>num2;

    cout<<"sum of these number= "<<sum(num1,num2) <<endl;
    cout<<"substraction of these numbers= "<<substract(num1,num2)<<endl;
    cout<<"multiplication of these numbers = "<<multi(num1,num2)<<endl;// actual parameters.
    cout<<"division of these numbers= "<<divi(num1,num2)<<endl ;

    return 0;
}

int multi(int x,int y)//formal parameters.
{
    int z=x*y;
    return z;
}

float divi(float j,float k)//formal parameters.
{
    float m=j/k;
    return m;
}*/
/*#include<iostream>
using namespace std;
float func4(float g)
{
    float udit=23.87;
    return udit ;
}
float func3(int &j,int &k)
{
    float div=j/k;
    return div;
}
int func1(int *p,int *q)
{
    int c=*p+*q;
    return c;
}
float func2(float x,float y)
{
    float multi=x*y;
    return multi;
}
int main()
{
    int a=100,b=50;
    float p=23.56;
    cout<<"sum ="<<func1(&a,&b)<<endl; //call by address
    cout<<"multiplication is= "<<func2(a,b)<<endl;// call by value
    cout<<"division is ="<<func3(a,b)<<endl; //call by reference
    cout<<"p value is = "<<func4(p);
        return 0;
}*/
 /*void swapp(int *x,int *y)
{

       int temp;
           temp=*x;
        *x=*y;
        *y=temp;
    }
int main()
{
    int a=23,b=56;
    cout<<"before swap a ="<<a <<endl <<"before swap b= "<<b <<endl;
    swapp(&a,&b);
    cout<<"after swap a and b ="<<a <<"\t" <<b;
    return 0;
}*/
#include<iostream>
using namespace std;
int func(int x,int i=1)
{
    do

{
    x=x*i;
    i++;
}
    whlie(i<=10)

}
int main()
{
    int a;
    cout<<"enter a number= ";
    cin>>a;
    cout<<"table of "<<a<<" is= "<<func(a);

    return 0;
}


























