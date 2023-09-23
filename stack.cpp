#include<iostream>
using namespace std;
#define capacity 5
int stack[capacity],top=-1;
void push();
void pop();
void peek();
void traverse();
int main()
{
    int ch;
    cout<<"1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.peek"<<endl;
    cout<<"4.traverse"<<endl;
    cout<<"5.exit"<<endl;
    while(1)
    {
        cout<<"enter your chioce: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: push();
                   break;
           case 2: pop();
                    break;
            case 3: peek();
                   break;
            case 4: traverse();
                   break;
             case 5: exit(1);
             default: cout<<"invalid choice"<<endl;

        }
    }

}
void push()
{
    int ele;
    cout<<"element to be push= ";
    cin>>ele;
    if(top==capacity-1)
        cout<<"stack overflow"<<endl;
    else
        top++;

        stack[top]=ele;

        cout<<"inserted: "<<stack[top]<<endl;
}
void pop()
{
    int ele;
    if(top==-1)
        cout<<"stack is empty"<<endl;
    else
        ele=stack[top];

        cout<<"deleted: "<<ele<<endl;
        top--;

}
void peek()
{
    if(top==-1)
        cout<<"stack is empty" <<endl;
    else
        cout<<"the peak value is: "<<stack[top]<<endl;
}
void traverse()
{
    if(top==-1)
        cout<<"stack is empty"<<endl;
    else
        cout<<"display of your stack is: "<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }


}

