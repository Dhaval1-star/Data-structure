#include<iostream>
using namespace std;
 
#define MAX 5 //Maximum number of elements that can be stored

int top=-1,stack[MAX];
void push();
void pop();
void display();
 
int  main()
{
int num;
    while(1) //infinite loop, will end when choice will be 4
    {
        cout<<"\n*** Stack Menu ***"<<endl;
        cout<<"\n\n1.Push\n2.Pop\n3.Display\n4.Exit"<<endl;
        cout<<"\n\nEnter your choice(1-4):"<<endl;
        cin>>num;
        switch(num)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default:
            cout<<"\nWrong Choice!!"<<endl;
        }
    }
}
 
void push()
{
int val;
if(top==MAX-1)
{
cout<<"\nStack is full!!"<<endl;
}
else
{
cout<<"\nEnter element to push:"<<endl;
cin>>val;
top=top+1;
stack[top]=val;
}
}
 
void pop()
{
if(top==-1)
{
cout<<"\nStack is empty!!"<<endl;
}
else
{
cout<<"\nDeleted element is "<<stack[top]<<endl;
top=top-1;
}
}
 
void display()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
cout<<"\n"<<stack[i]<<endl;
}
}