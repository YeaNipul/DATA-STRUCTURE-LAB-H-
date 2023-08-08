#include<iostream>
#define n 5
using namespace std;
class stack
{
public:
int stack[n];
int top = -1;
int isEmpty()
{
    if(top == -1)
        {
           cout<<"Stack is empty"<<endl;
        }
}
int isFull()
{
    if(top == n-1)
        {
           cout<<"Stack is full"<<endl;
        }
}
void push(int x)
{
   if(top == n-1)
      {
         cout<<"Stack is full"<<endl;
      }
   else
       {
          top++;
          stack[top]=x;
       }

}
void pop()
{
    int item;
    if(top == -1)
        {
           cout<<"Stack is empty"<<endl;
        }
    else
        {
           item = stack[top];
           top--;
           cout<<"Popped element is :"<<item<<endl;
        }

}
void peek()
{
    if(top == -1)
        {
           cout<<"Stack is empty"<<endl;
        }
    else
        {
           cout<<"Top most element is :"<<stack[top]<<endl;
        }

}
void display()
{
    if(top == -1)
        {
           cout<<"Stack is empty"<<endl;
        }
    else
        {
           for(int i=top; i>=0; i--)
              {
                 cout<<stack[i]<<"   ";
              }

        }cout<<endl;

}
void average()
{
    int sum=0;
    float avg;
    if(top == -1)
        {
           cout<<"Stack is empty"<<endl;
        }
    else
        {
           for(int i=top; i>=0; i--)
              {
                 sum = sum+stack[i];
              }
        }
        avg = float(sum);
        cout<<"Sum is :"<<sum<<endl;
        cout<<"Average is :"<<avg<<endl;
}

};
int main()
{
  stack s;
  s.push(5);
  s.push(10);
  s.push(15);
  s.push(12);
  s.push(22);
  cout<<"Stack elements are :";
  s.display();
  s.peek();
  s.average();

  return 0;
}

