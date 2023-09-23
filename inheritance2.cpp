/*#include<iostream>
using namespace std;
class student
{
public:
     int roll, marks;
     void setdata()
     {
         cout<<"enter roll and mark= "<<endl;
         cin>>roll >>marks;
     }

};

class output : public student
{
public:
    void print()
    {
        cout<<"roll no: "<<roll <<"\n"<<"marks: "<<marks <<endl;
    }

};
class  perc: public student, public output
{
public:
     float p;
     class perc::student;
     void percentage()
     {
         p=marks/100;

     }
     cout<<"addition of roll and marks= " <<marks+roll <<endl;
};
int main()
{
    perc obj;

    obj.print();

    return 0;
} */
 /*#include<iostream>
using namespace std;
class base
{
    int data1; //it is private and can't be inherited.
public:
     int data2;
     void setdata();
     int  getdata1();// for declaring data1 coz itz declaring inside private.
     int  getdata2();

};
void base::setdata()
{
    data1=10;
    data2=20;
}
int  base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}
class derived:public base
{
    int data3;
public:
    void process();
    void display();

};
void derived::process()
{
    data3=data2*getdata1(); //getdata() helps to access "data1" bcoz itz declare inside the private.
}
void derived ::display()
{
    cout<<"data 1: "<<getdata1()<<endl;
    cout<<"data 2: "<<data2<<endl;
    cout<<"data 3: "<<data3<<endl;
}
int main()
{
    derived obj;
    obj.setdata();
    obj.process();
    obj.display();

    return 0;
} */
//******MULTI LEVEL INHERITANCE******////
/*#include<iostream>
using namespace std;
class student
{
private:
     int roll; //declared in private.
public:
    int phy,che;
    int  getroll()
    {
        return 45;
    }
    void setmark(int x,int y)
    {
        phy=x;
        che=y;

    }
};
class total:public student
{
public:
    int t;
    void tot()
     {
         t=phy+che;
        cout<<"total mark= "<<t <<endl;
     }
};

class perc:public total
{
public:


     void percent()
     {
         cout<<"roll "<<getroll()<<endl; //getroll() helps to accessing the private element.
         setmark(67,89); //calling.
         tot();//calling.
         float p=t/2;
         cout<<"percentage: "<<p<<"%"<<endl;
     }
};
int main()
{
    perc obj;
    obj.percent();

    return 0;

}*/
//////*** multi level inheritance ***/////
/* #include<iostream>
using namespace std;
class student
{
public:
     int roll;
     void stuname()
     {
        roll=03;
        cout<<"roll: "<<roll<<endl;

     }
};
class phy
{
public:
     int p;
     void pmark(int x)
     {
         p=x;
         cout<<"physics= "<<p<<endl;

     }

};
class che
{
public:
    int c;
    void cmark(int y)
    {
        c=y;
        cout<<"chemistry= "<<c<<endl;
    }
};
class data: public student,public phy,public che  // multilevel inheritance.
{
public:
     int d;
     void print()
     {


         cout<<"total mark: "<<p+c<<endl;
     }
};
int main()
{
    data obj;
    obj.stuname();
    obj.pmark(90);
    obj.cmark(56);
    obj.print();

    return 0;

} */
//////////////***ambiguity resolution***///////////
/*#include<iostream>
using namespace std;
class rohan
{
public:
     void mark()
     {
         cout<<"mark= "<<"45"<<endl;
     }
};
class bijay
{
public:
     void mark()
     {
         cout<<"mark= "<<"89"<<endl;
     }
};
class derived : public rohan,public bijay
{
public:

    void der()
    {
        bijay::mark(); //it will access "mark()" of class "bijay".
    }
};
int main()
{
    derived obj;
    obj.der();

    return 0;

} */
#include<iostream>
using namespace std;
class student //virtual base class.
{
protected:
    int roll;
public:
     void showroll(int r)
     {
       roll=r;
       cout<<"roll no: "<<roll<<endl;
     }

};
class study : virtual public student //derived from virtual class
{
protected:
    float  mark1,mark2;
public:
     void showmark(float m1,float m2)
     {
         mark1=m1;
         mark2=m2;
         cout<<"physics= "<<mark1<<endl;
         cout<<"chemistry= "<<mark2<<endl;

     }


};
class sports:virtual  public student //derived from virtual class
{
protected:
     int score;
public:
     void showscore(int s)
     {
         score=s;
         cout<<"score= "<<s<<endl;

     }

};
class result :public study,public sports // derived from two ab above derived class.
{
protected:

    float res;
public:
     void showresult()
     {
         showroll(4);
         showmark(78.9,89.5);
         showscore(34);
         res=mark1+mark2+score;
         cout<<"result= "<<res<<endl;
     }
};
int main()
{
    result obj;
    obj.showresult();

    return 0;

}

