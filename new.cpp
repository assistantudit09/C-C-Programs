#include<iostream>
using namespace std;
int sum(int *p,int *q);

int main()
{
    int a,b,temp;
    cout<<"enter value for a= ";
    cin>>a;
    cout<<"enter value for b= ";
    cin>>b;
    cout<<"before swap" <<"value of a= "<<a<<endl<<"value of b= "<<b <<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swap a and b is = "<<a <<"and "<<b <<endl;
    cout<<"sum of a and b= "<<sum(&a,&b);
    return 0;
}

    int sum(int *p,int *q)
    {


       int r=*p+*q;
       return r;
    }





