/*#include<iostream>
using namespace std;
class udit
{
    int a,b,c;
public:
    udit(int p,int q,int r):a(p),b(q),c(r) //direct intialization trick.
     {
         cout<<"constructor is executed" <<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;

     }
};
int main()
{
    udit obj(45,67,89);

    return 0;
} */
/*#include<iostream>
using namespace std;
int main()
{
    int a=90;
    int *p=&a;
    cout<<"pointer p= "<<*p<<endl;

    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int *ptr= new int (45);//"new" operator is used for dynamically initialize of pointer .
    float *udit=new float(78.56);
    delete udit;// it simply deletes the pointer.
    //delete ptr; it also delete ptr pointer.
    cout<<"dynamic pointer ptr= "<<*ptr<<endl;
    cout<<"dynamic pointer udit= "<<*udit<<endl; //gives garbage value.

    return 0;
} */
/*#include<iostream>
using namespace std;
int main()
{
    int *ptr=new int[3];//array created dynamically
    ptr[0]=67;
    ptr[1]=90;
    ptr[2]=56;
   // delete ptr;
    cout<<ptr[0]<<endl;
    cout<<ptr[1]<<endl;
    cout<<ptr[2]<<endl;

    return 0;
}*/
/*#include<iostream>
using namespace std;
class number
{
    int p,q;
public:
     void setdata(int x,int y)
     {
         p=x;
         q=y;

     }
     void getdata()
     {
         cout<<"p is= "<<p<<endl;
         cout<<"q is= "<<q<<endl;
     }
     void sum()
     {
         cout<<"sum of p and q= "<<p+q<<endl;
     }
};
int main()
{
    number *obj=new number; or number[5];(for array) //dynamically intialization of object.
    obj->setdata(67,54);
    (*obj).getdata();
    obj->sum();

    return 0;


} */


