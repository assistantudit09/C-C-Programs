#include<iostream>
using namespace std;
class number
{
    int x,y;
public:
    friend sum(number n1);
     void setdata()
     {
         cout<<"enter two numbers= "<<endl;
         cin>>x>>y;

     }

};
sum(number n1)
{
    cout<<"sum= "<<n1.x+n1.y<<endl;

    }
    int main()
    {
         number obj;
         obj.setdata();
         sum(obj);

         return 0;

    }

