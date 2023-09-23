#include<iostream>
using namespace std;
/*class udit
{
    int a;
public:
    int b,c,d;
    int  sum(int x,int y);

};
int udit::sum(int x,int y)
{
    int r;
     return  r=x+y;
}
int main()
{
    udit obj;
    int b,c;
    cout<<"enter two values= "<<endl;
    cin>>b>>c;
    cout<<"sum is= "<<obj.sum(b,c);


    return 0;
}*/
/*class addition
{
public:

    int sum(int p,int q,int r)
    {
        int s;
        return s=p+q+r;
    }
    int substract(int j,int k)
    {
        int m;
        return m=j-k;
    }
};
int main()
{
    addition obj;
    int a,b,c;

    cout<<"enter three values= "<<endl;
    cin>>a>>b>>c;
    cout<<"sum is= "<<obj.sum(a,b,c)<<endl;
    cout<<"substraction is= "<<obj.substract(a,b);


    return 0;
}*/
class udit
{
    int num;
  public:
      int sum(int x,int y);
      int substract(int p, int q);
      int multiply(int j,int k);

};
int udit::sum(int x,int y)
{
    int z;
    return z=x+y;
}
int udit::substract(int p,int q)
{

    int r;
    return r=p-q;
}
int udit::multiply(int j,int k)
{
    int sum(int x,int y);
    int substract (int p,int q);
    int l;
    return l=j*k;

}

int main()
{
    udit obj;
    int a,b;
    cout<<"enter two values= ";
    cin>>a>>b;
    cout<<"the multiplication ,addition and substraction  is= "<<endl;
    cout<<obj.multiply(a,b)<<endl<<obj.sum(a,b)<<endl<<obj.substract(a,b);

    return 0;


}
