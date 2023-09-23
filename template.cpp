/*#include<iostream>
using namespace std;
template<class T,class T2>
class number
{
    T x;
     T2 y;
public:
     number(T a,T2 b)
    {
        x=a;
        y=b;

    }
     T2 display()
    {
        cout<<"sum is= "<<x+y<<endl;
        return (x+y);
    }

};
int main()
{
    number <int,float>obj(3,5.7);
    obj.display();

    return 0;


} */
#include<iostream>
using namespace std;
template<class t1,class t2>
class student
{
    t1 phy,che,mth;
    t2 avg;
public:
    student( )
    {
        cout<<"enter mark for phy,che and mth resp.= "<<endl;
        cin>>phy>>che>>mth;
    }
    t2 average()
    {
        t2 avg=phy+che+mth/3;
        cout<<"average= "<<avg<<endl;

    }

};
int main()
{
        student obj();
        obj.average();

    return 0;
}
