#include<iostream>
using namespace std;
float divi(float j,float k);
int multi(int x,int y);
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

    cout<<"multiplication of these numbers = "<<multi(num1,num2)<<endl;
    cout<<"division of these numbers= "<<divi(num1,num2)<<endl ;
    return 0;
}
int multi(int x,int y)
{
    int z=x*y;
    return z;
}
float divi(float j,float k)
{
    float m=j/k;
    return m;
}
