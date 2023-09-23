/*#include<iostream>
using namespace std;
class number
{
    int p,q;
public:
    friend void sum( number); //declaring friend function.
     void setdata(int x,int y)

     {
         p=x;
         q=y;
         cout<<"you entered= "<<p<<" and "<<q<<endl;

     }
};
void sum(number n1)//initialize of friend function.
{
    cout<<"sum= "<<n1.p+n1.q<<endl; //accessing through "." operator.
}
int main()
{
    number obj;
    obj.setdata(7,8);


    sum(obj);
    return 0;
} */
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
}
