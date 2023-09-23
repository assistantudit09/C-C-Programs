#include<iostream>
using namespace std;
int main()

{
  cout<<"selection of candidate for Indian army"<<endl;
  int age,qua,hgt,wgt;
  char nat[50]="ind";
  char name[50];
  cout<<"enter name= ",cout<<endl;
  cin>>name;
  cout<<"enter age= ",cout<<endl;

  cin>>age;
  cout<<"enter qualification(in th)= ",cout<<endl;
  cin>>qua;
  cout<<"enter height (in cm)= ",cout<<endl;
  cin>>hgt;
  cout<<"enter weight= ",cout<<endl;
  cin>>wgt;
  cout<<"enter nationality= ",cout<<endl;
  cin>>nat;
  if((age<=24&&age>=20)&&(qua==12)&&(hgt>=165)&&(nat=="ind")&&(wgt>=45&&wgt<=65))
     cout<<name ,cout<<"is eligible";
     else
        cout<<name ,cout<<"is  eligible";
}



