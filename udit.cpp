#include<iostream>
#include<conio.h>
using namespace std;
int glo=234;
int sum()
{
    int a;
    glo=234;
}
int main()
{

    int a,b,c;
    float glo=3.34;

    cout<<"\n enter value for a and b= ";
    cin>>a>>b;
    c=a+b;
    cout<<"\n the sum is="<<c;
    cout<<"\n local global is=" <<glo;




    sum();
    cout<<"\n global is=" <<glo;
    return 0;
   }





