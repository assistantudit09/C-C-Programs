#include<iostream>
using namespace std;
const int p=45;
class number
{
     private :
        static int x;
        int y;
    public:
        void getdata(void);
        void sum(void);
        void print(void);


};
int number:: x=70;
void number::getdata(void)
{
    cout<<"enter a number: ";
    cin>>y;
}
void number::sum(void)
{
    int s=x+y+p;
    cout<<" sum of x,y and p : "<<s<<endl;

}
void number::print(void)
{
    cout<<"static x: "<<x <<endl;
    cout<<"constant p: "<<p <<endl;

}
int main()
{
    number obj1;
    obj1.getdata();
    obj1.sum();
    obj1.print();



}


