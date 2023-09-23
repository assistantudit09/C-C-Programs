#include<iostream>
using namespace std;
int main()
{

    int a,b,temp;
    cout<<"enter value for a= ";
    cin>>a;
    cout<<"enter value for b= ";
    cin>>b;
    cout<<" a and b before swaping is= " <<a <<"and" <<b <<"\n"  ;


    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping a and b= " <<a <<"and" <<b;


}
