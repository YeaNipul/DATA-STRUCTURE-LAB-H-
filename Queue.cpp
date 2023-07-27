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
          cout<<"Queue is full "<<"\n";
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
           cout<<"Queue is empty "<<"\n";
        }
    else if(front == rear)
        {
          front = rear = -1;
        }
    else
        {
          cout<<"Dequeued element is :"<<queue[front]<<"\n";
          front++;
        }

}
void peek()
{
    if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty "<<"\n";
        }
    else
        {
           cout<<"Front element is :"<<queue[front]<<"\n";
        }



}
void display()
{
   if(front == -1 && rear == -1)
        {
           cout<<"Queue is empty "<<"\n";
        }
        else
            {
                cout<<"Queue elements are :"<<"\n";
              for(int i=front; i<=rear; i++)
                {
                   cout<<queue[i]<<"\n";
                }
            }



}



};
int main()
{
   Queue q;



  q.enqueue(10);
  q.enqueue(15);
  q.enqueue(30);
  q.enqueue(45);
  q.enqueue(50);
  q.dequeue();
  q.peek();
  q.display();
  q.enqueue(10);



  return 0;
}
