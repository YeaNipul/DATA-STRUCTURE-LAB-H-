#include<iostream>
#define n 5
using namespace std;
class stack
{
public:
int stack[n];
int top = -1;
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
void reverse()
{
    int * temp = new int[n];
    for(int i=0; i<n; i++)
        {
           temp[i]=stack[top--];
        }
        for(int i=0; i<n; i++)
            {
               push(temp[i]);
            }
        delete[] temp;

}

};
int main()
{
  stack s;
  s.push(9);
  s.push(15);
  s.push(35);
  s.push(20);
  s.push(32);
  cout<<"Stack elements are :";
  s.display();
  s.peek();
  s.reverse();
  cout<<"Reverse elements are :";
  s.display();
  s.pop();
  s.pop();
  cout<<"After popped two elements the stack elements are :";
  s.display();

 return 0;
}
