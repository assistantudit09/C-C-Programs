#include<iostream>
using namespace std;
class employee
{
   private:
       int a,b,c;   //only functions can access which are inside it. it is private.
    public:
        int d,e;// publically access.
        void setdata(int p,int q,int r);// declaration (should be used in future)

        void getdata()
        {
            cout<<"the value of a is= "<<a<<endl;
            cout<<"the value of b is= "<<b<<endl;
            cout<<"the value of c is= "<<c<<endl;
            cout<<"the value of d is= "<<d<<endl;
            cout<<"the value of e is= "<<e<<endl;

        }

};
void employee :: setdata(int p,int q,int r)
{
    a=p;
    b=q;
    c=r;
}

int main()
{
    employee udit;
    //udit.a=78;( a is private here so u can not access it)
    udit.d=23;
    udit.e=45;
    udit.setdata(1,2,4);
    udit.getdata();

    return 0;

    }
