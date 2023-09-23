
/*#include<iostream>
using namespace std;
class student*/
/*{
private:
    int a,b,c;
public:
    int d,e;
    void pri(int x,int y,int z);
    void output()
    {
        cout<<"a is= "<<a<<endl;
        cout<<"b is= "<<b<<endl;
        cout<<"c is= "<<c<<endl;
        cout<<"d is= "<<d<<endl;
        cout<<"e is= "<<e<<endl;
    }


};
void student::pri(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
int main()
{
    student udit;
   // udit.a=78; a is under private so we can't access directly.
    udit.d=34;
    udit.e=56;
    udit.pri(3,5,6);
    udit.output();

    return 0;

}*/
/*#include<iostream>
using namespace std;
class udit
{
    int udit;
   public:
       int sum(int x,int y);
       int multi(int p,int q)
       {
           int r=p*q;
           return r;
       }
       int substract(int j,int k );
      int divi(int m,int n)
       {
           int d=m/n;
           return d;

       }



};
int udit::sum(int x,int y)
{

   int z=x+y;
   return z;
}
int udit::substract(int j, int k)
{

    int l=j-k;

    return l;
    cout<<"substract= "<<l;
}
int main()
{
    udit obj;
    cout<<"object: "<<endl;
    cout<<obj.sum(34,67)<<endl;
   // cout<<obj.substract(45,23)<<endl;
    cout<<obj.multi(56,7)<<endl;
    udit division;
    cout<<"division "<<endl;
    cout<<division.divi(34,2)<<endl;





    return 0;




}*/
/*#include<iostream>
using namespace std;
class number
{
    int num1,num2,ele;
     public:
         void work()

         {
             cout<<"enter first number= "<<endl;
             cin>>num1;
             cout<<"enter second number= "<<endl;
             cin>>num2;
             ele=num1+num2;
             cout<<"sum is= "<<ele<<endl;



         }
         void eo()
         {
             if (ele>0)
                cout<<"answer is positive"<<endl;
             else
                cout<<"it is nagative" <<endl;

         }
         void evod();

};
void number::evod()
{
    if(ele%2==0)
        cout<<"answer is even ";
    else
        cout<<"answer is odd";
}
int main()
{
    number num;
    num.work();
    num.eo();
    num.evod();


}*/
/*#include<iostream>
using namespace std;
class emp
{
    char name[50];
    static int year;
    public:
        void setdata(void)
        {
            cout<<"enter your name= "<<endl;
            cin>>name;
            year++;
        }
        void getdata(void)
        {
            cout<<"your name is= "<<name <<" and birth year is= "<<year<<endl;


        }
        void y(void)
        {
            cout<<"birth day year= "<<year;

        }

};
int emp::year=2000+1;
int main()
{
    emp sahil;
    sahil.setdata();
    sahil.getdata();
    sahil.y();*/

/*#include<iostream>
using namespace std;
class employee
{

    int redg;
    int counter;
    public:
        void getdata(void)
        {

            cout<<"enter employee id= "<<counter+1<<endl;

            cout<<"enter employee regd= "<<endl;
            cin>>redg;
            counter++;


        }
        void setdata(void)
        {
            cout<<"employee id is= "<<counter <<" and redg is= "<<redg<<endl;
        }

};
int main()
{
    employee udit,sahil,rohan;
    udit.getdata();
    udit.setdata();

    sahil.getdata();
    sahil.setdata();

    rohan.getdata();
    rohan.setdata();

    return 0;
}*/
/*#include<iostream>
using namespace std;
class number
{
private:
      int x,y,z;
public:
     void setdata(void);
     void sum(void);

};
void number::setdata(void)
{
    cout<<"enter two number: ";
    cin>>x>>y;

}
void number::sum(void)
{
    z=x+y;
    cout<<"sum is "<<z;


}
int main(){
    number obj;
    obj.setdata();
    obj.sum();

 } */
/*#include<iostream>
using namespace std;
class student
{
    int roll[50];
    int mark[50];
    int counter;
    public:
      void cntinit(void)
      {
           counter=0;

      }
      void setdata(void);
      void getdata(void);

};
void student::setdata(void)
{
    cout<<"enter student roll: "<<endl;
    cin>>roll[counter];
    cout<<"enter student mark: "<<endl;
    cin>>mark[counter];
    counter++;
}
void student::getdata(void)
{
    for(int i=0;i<counter;i++)

    cout<<"student" <<"mark is: "<<mark[i] <<"roll no. is: "<<roll[i] <<endl;

}
int main()
{
    student udit;

    udit.cntinit();
    udit.setdata();

    udit.setdata();

    udit.setdata();
    udit.getdata();


    return 0;
}*/
/*#include<iostream>
using namespace std;
class number
{
     static int x;
    float y;
    public:
        static void setdata(void)
         {
             cout<<"enter value for x= ";
             cin>>x;

         }
         void udit(void)
         {
             y=x;
             cout<<"the value of y= "<<y <<endl;
         }
};
int number::x;


int main()
{
    number num;
    num.setdata();
    num.udit();
} */

/*#include<iostream>
using namespace std;
class student
{
    int roll,stand,mark;
    char name[50];
    public:
         void setdata();
         void print();
};
void student::setdata()
{
    cout<<"enter student name: "<<endl;
    cin>>name;
    cout<<"enter student roll, standard and mark";
    cin>>roll>>stand>>mark;


}
void student:: print()
{
    cout<<name<<endl;
    cout<<"roll no: "<<roll<<endl;
    cout<<"standard: "<<stand <<endl;
    cout<<"mark is: "<<mark<<endl;
}
int main()
{
    student obj[10]; // that is "array of object"...
    for(int i=0;i<10;i++)
    {
        obj[i].setdata();

    }
    for(int i=0;i<10;i++)
    {
        obj[i].print();
    }

    return 0;


} */

/*#include<iostream>
using namespace std;
class time
{
    int h,m;
    public:
        void settime(int ,int );
        void puttime(void);
        void sum(time ,time);

};
void time:: settime(int x,int y)
{
    h=x;
    m=y;
}
void time::puttime(void)
{
    cout<<"hours= "<<h<<endl;
    cout<<"minutes= "<<m<<endl;

    }
void time::sum(time t1,time t2)
{
    m=t1.m+t2.m;
    h=m/60;
    m=m%60;
    h=h+t1.h+t2.h;
}

int main()
{
    time t1,t2,t3;
    t1.settime(3,45);
    t2.settime(4,35);
    t3.sum(t1,t2);
    t1.puttime();
    t2.puttime();
    t3.puttime();

    return 0;
}

#include<iostream>
using namespace std;
class number
{
    int x,y;
    public:
        void setdata(int ,int);
        void getdata (void);
        void sumdata(number n1,number n2);
        void multi(number ,number);


};
void number::setdata(int a,int b)
{
    x=a;
    y=b;
}
void number::getdata(void)
{
    cout<<"value of x= "<<x<<endl;
    cout<<"value of y= "<<y<<endl;

}
void number::sumdata(number n1,number n2)
{
    x=n1.x+n2.x;
    y=n1.y+n2.y;

}
void number::multi(number n1,number n2)
{
    x=n1.x*n2.x;
    y=n1.y*n2.y;
}
int main()
{
    number n1,n2,n3,n4;
    n1.setdata(5,6);
    n2.setdata(2,3);
    n3.sumdata(n1,n2);
    n4.multi(n1,n2);
    n1.getdata();
    n2.getdata();
    n3.getdata();
    n4.getdata();

    return 0;
}*/

/*#include<iostream>
using namespace std;
class comp
{
   int a,b;
   public:
        void setdata(int ,int);
        void getdata();
        friend comp sum(comp,comp);
        void sumcomp();

};
void comp::setdata(int x,int y)
{
    a=x;
    b=y;
}
void comp::getdata()
{
    cout<<"complex no.is= "<<a<<" + "<<b<<"i"<<endl;
}
comp sum(comp c1,comp c2)
{
    comp c3;
    c3.setdata((c1.a+c2.a),(c1.b+c2.b));
    return c3;
}
void comp ::sumcomp()
{
    cout<<"sum of above complex no= "<<a <<" + "<<b <<"i"<<endl;
}
int main()
{
    comp ob1,ob2,ob3;
    ob1.setdata(3,5);
    ob1.getdata();
    ob2.setdata(6,8);
    ob2.getdata();
    ob3=sum(ob1, ob2);
    ob3.sumcomp();

    return 0;
}*/
/*#include<iostream>
using namespace std;
class a
{
    int x;
    friend void print(a);
};
 void  print(a obj)
{
    cout<<"enter value for x "<<endl;
    cin>>obj.x;
    cout<<"you entered= "<<obj.x;
}
int main()
{
    a object;
    print(object);
    return 0;
}*/
/*#include<iostream>
using namespace std;
class number
{
    int a,b;
    public:
        void setdata();
        friend number  mean(number );

};
void number::setdata()
{
    cout<<"enter two numbers= "<<endl;
    cin>>a >>b ;

}
 number mean(number obj)
{

     cout<<"mean= "<<(obj.a+obj.b)/2<<endl;


}
int main()
{
 number num;
 num.setdata();
 mean(num);

 return 0;
} */
/*#include<iostream>
using namespace std;
class number
{
    friend class newnum; //declaration of friend class
    int x,y;
    public:

     void setdata(int ,int );
     void sum();

};
class newnum
{
public:
     void multi( number );// this function should clarry class name as arguments.

};
void number::setdata(int a,int b)
{
    x=a;
    y=b;
}
void number::sum()
{
    cout<<"sum is= "<<x+y<<endl;
}
void newnum::multi(number n1) //initialization of function of friend class .
{
    cout<<"multi is= "<<n1.x*n1.y;
}
int main()
{
    number obj;
    newnum obj1; //object of friend class
    obj.setdata(7,4);
    obj.sum();
    obj1.multi(obj);//calling arguments should carry old class's object.

    return 0;
} */
/*#include<iostream>
using namespace std;
class num2;// forward declaration of next class.
class num1
{
    int a;
    public:
        void setdata(int x)
        {
            a=x;
        }
        friend void add(num1,num2);// friend function declaration.


};
class num2
{
    int b;
    public:
        void setdata(int y)
        {
            b=y;
        }
        friend void add (num1,num2); //friend function declaration

};
void add(num1 n1,num2 n2)//initialization of friend function .
{
    cout<<"sum is = "<<n1.a+n2.b;
}
int main()
{
    num1 obj1;
    obj1.setdata(3);
    num2 obj2;
    obj2.setdata(7);
    add (obj1,obj2); //passing.


    return 0;
}*/
/*#include<iostream>
using namespace std;
class comp
{
    int a,b;
    public:
         comp(); //declaration of default constructor.

         void print()
         {
             cout<<"complex no. is= "<<a<<"+"<<b<<"i" <<endl;
         }


};
comp::comp()//intilization of default constructor.
{
    a=34;
    b=56;
}
int main(){
  comp c1;
  c1.print();
  //no need to call for constructor ,because id calls   autometically.
  return 0;
} */
/*#include<iostream>
using namespace std;
class number
{
    int a,b;
    public:
        void getdata();
        number(int ,int); //declaration of parameterized constructor.
};
  void number::getdata()
  {
      cout<<"sum is= "<<a+b <<endl;

  }
  number::number(int x,int y) //intialization of parameterized constructor.
  {
      a=x;
      b=y;
  }
  int main()
{
    number n1(56,78); //it is a calling style for parameterized constructor.
    n1.getdata();

    return 0;
} */
/* #include<iostream>
using namespace std;
class number
{
    int x,y,z;
    public:

    number(int ,int );

};
number::number(int a,int b=10) //default value. b=10.
{
    x=a-b;
    cout<<"substraction= "<<x<<endl;
}
int main()
{
number n2(56);
return 0;

}*/

/*#include<iostream>
using namespace std;
class emp
{
    int id;
    char name[50];
    float sal;
    public:
        void show();
        emp();

};
emp::emp()
{
    cout<<"enter employee id= "<<endl;
    cin>>id;
    cout<<"enter employee name= "<<endl;
    cin>>name;
    cout<<"enter employee  salary= "<<endl;
    cin>>sal;
}
void emp::show()
{
    cout<<"id= "<<id<<" name= "<<name<<" salary= "<<sal <<endl;
}
int main()
{
    int n;
    cout<<"how many employee u have= "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    emp e1;
    e1.show();
    }

    return 0;
} */
/*#include<iostream>
using namespace std;
class number
{
    int a;
    public:
        void show()
        {
         cout<<"the number of this object is "<<a<<endl;
        }
        number()
        {
            a=0;
        }
        number(int num)
        {
            a=num;
        }
        number(number &obj) //copy constructor
        {
            cout<<"copy constructor is called!!!"<<endl;
        }


};
int main()
{
    number n1,n2,n3(67);
    n1.show();
    n2.show();
    n3.show();
    number n4(n3);
    n4.show();

}*/

/*#include<iostream>
using namespace std;
class number
{
    int x;
public:
     void show()
     {
         cout<<"the value of x= "<<x<<endl;
     }
     number()
     {
       x=90;
     }
     number(int p)
     {
         x=p;
     }
     number(number &num)
     {

         x=num.x;
         cout<<"copied constructor is: "<<x <<endl;
     }
};
int main()
{
    number n1,n2(69),n3(n2);
    n1.show();
    n2.show();
    n3.show();

    return 0;
} */
/*#include<iostream>
using namespace std;
class number
{
    int a;
    public:
        number(int x)
        {
            a=x;
            cout<<"the value is= "<<a <<endl;

        }
        ~number()
        {
            cout<<"the value "<<a<<" is destroyed" <<endl;
        }


};
int main()
{
    number obj(45);


    return 0;
}*/
/*#include<iostream>
using namespace std;
class number
{
    int x;
    public:
        void num()
        {
            cout<<"value "<<endl;
            cin>>this->x;

        }
        void show()
        {
            cout<<"address is "<<this->x;
        }

};
int main()
{
    number obj;
    obj.num();
    obj.show();

    return 0;

} */

/*#include<iostream>
using namespace std;
class udit
{
    int a;
    public:
        /*void show()
        {
            cout<<"the value is= "<<a <<endl;

        }*/
        /*udit()
        {
            a=67;
            cout<<"the value of a= "<<a<<endl;

        }
        udit(float f)
        {
            a=f;
            cout<<"the floating value is= "<<a<<endl;
        }
        ~udit()
        {
            cout<<"the destructor is called!!!"<<endl;
        }

};
int main()
{
    udit obj,obj1(12),obj3(obj1);

    return 0;
} */
#include<iostream>
using namespace std;
class employee //base class
{
public:
    int id;
    float salary;
    employee(int emp)
    {
        id=emp;
        salary=45000;
    }
    employee(){}
};
class programmer : public employee
{
public:
     int languagecode;
     programmer(int p)
     {
         id=p;
         languagecode=7;

     }
     void getdata()
     {
         cout<<id<<endl;
     }
};
int main()
{
    employee harry(1),rohan(2);
    cout<<"harry salary= "<<harry.salary <<endl;
    cout<<"harry id="<<harry.id<<endl;
    cout<<"rohan id="<<rohan.id<<endl;
    cout<<"rohan salary= "<<rohan.salary<<endl;
    programmer skill(10);
    cout<<skill.languagecode<<endl;
    cout<<skill.id<<endl;

    skill.getdata();
    return 0;
}










