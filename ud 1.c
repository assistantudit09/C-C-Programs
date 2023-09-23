#include<stdio.h>
int main()
{
   int a=3,b=5;
   if(a>b)
        a=a+5;
   else{

    if(a++==3)
           a=a+10;
     else
          a=a+20;




   }
   printf("%d %d",a,b);





}
