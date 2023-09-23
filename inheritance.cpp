/*#include<iostream>
using namespace std;
class number
{
private:
     int pri;
public:
    int pub;
protected:
    int pro;

};
class number2: protected number
{
   public:
    number2(int y,int z)
    {

        pub=y;
        pro=z;

    }
    void display()
    {
        cout<<"private: "<<pri<<endl;
        cout<<"public: "<<pub<<endl;
        cout<<"protected: "<<pro;
    }
   private:
       void priv(int p)
       {
           pri=p;
       }

};
int main()
{
    number2 obj(3,4);
    obj.priv(9);
    obj.display();

    return 0;
} */
#include<iostream>
using namespace std;
