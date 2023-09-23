#include<stdio.h>
int main()
{
    int x;
    FILE *udit;
    udit=fopen("C:\Users\udit\Desktop\code blocks programs.txt\n","r");
   fscanf(udit,"%s",x);
   printf("%s",x);

    fclose(udit);




}
