#include<stdio.h>
int main()
{
   int a,b,c;
   int ch;
   printf("enter two numbers\n");
   scanf("%d%d",&a,&b);

   printf("enter your choice\n");
   scanf("%d",&ch);

   switch(ch)
   {
      case 1:c=a+b;
      printf("%d",c);
      break;

      case 2:c=a-b;
      printf("%d",c);
      break;

      case 3:c=a*b;
      printf("%d",c);
      break;

       case 4:c=a/b;
      printf("%d",c);
      break;

      default:printf("invalid\n");
      break;
      }

     return 0;












}
