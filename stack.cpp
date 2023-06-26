#include <iostream>
#define size 5

using namespace std;


class Stack{

    public:
        Stack(){};
        string myIds[size];
        int top = -1;

    void push (string id){

        if(top >= size){
            cout<<"The stack is full"<<endl;
        }else{
            myIds[++top] = id;
        }
    }


    void pop(){
        if(top<0){
            cout<<"The Stack is empty"<<endl;
        }else{
            --top;
        }
    }

    void printStack(){
        for(int i=0; i<=top; i++)
        {
            cout<<"ID:"+myIds[i]<<endl;
        }
        cout<<"-----------End---------"<<endl;
    }

};


int main()
{
    Stack s;

    s.push("22-48584-3");
    s.printStack();
    s.pop();
    s.push("09-11111-2");
    s.printStack();
    s.pop();


    return 0;
}
