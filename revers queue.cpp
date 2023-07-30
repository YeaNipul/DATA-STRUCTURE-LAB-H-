#include<iostream>
#define n 5
using namespace std;

class Queue
{
public:

int queue[n];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear==n-1)
        {
          cout<<"Queue is full "<<endl;
        }
    else if(front == -1 && rear == -1)
        {
           front = rear = 0;
           queue[rear]=x;
        }
        else
            {
               rear++;
               queue[rear]=x;
            }

}
void dequeue()
{
    if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty "<<endl;
        }
    else if(front == rear)
        {
          front = rear = -1;
        }
    else
        {
          cout<<"Dequeued element is :"<<queue[front]<<endl;
          front++;
        }

}
void peek()
{
    if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty "<<endl;
        }
    else
        {
           cout<<"Front element is :"<<queue[front]<<endl;
        }

}
void display()
{
   if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty "<<endl;
        }
        else
            {
                cout<<"Queue elements are :";
              for(int i=front; i<=rear; i++)
                {
                   cout<<queue[i]<<"   ";
                }
            }

}
void revers()
{
    if(front == -1 && rear == -1)
        {
          cout<<"Queue is empty "<<endl;
        }
    else
        {
            cout<<endl<<"Reverse queue elements are :";
           for(int i=rear; i>=front; i--)
            {
               cout<<queue[i]<<"   ";
            }
        }
}

};
int main()
{
   Queue r;

  r.enqueue(11);
  r.enqueue(15);
  r.enqueue(10);
  r.enqueue(19);
  r.enqueue(20);
  r.display();
  r.revers();

  return 0;
}
