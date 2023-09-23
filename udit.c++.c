
#include<iostream>
#include<conio.h>
int main()
{
   int i,n,fact=1;
   cout<<"enter number=\n";
   cin>>"%d",&n;
   for(i=1;i<=n;i++)
   {
       fact=fact*i;
   }
   cout<<("factorial=%d",fact);
}
