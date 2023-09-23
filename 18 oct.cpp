#include<iostream>
using namespace std;
int func1(int x)
{
    if(x==1)
        return 1;
    else
        return x*func1(x-1);
}
int main()
{
    int a;
    cout<<"enter a number= ";
    cin>>a;
    cout<<"factorial of this number is= "<<func1(a);


}
