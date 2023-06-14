#include<iostream>
using namespace std;
int main()

{
    int n=6;
    int A[n];
    int B[n];
    int C[n];
    cout<<"Array 1= "<<endl;
    for(int i=0; i<n;i++)
    {
        cin>>A[i];
    }
    cout<<endl;
    cout<<"Enter the elements of second array2: "<<endl;
    for(int i=0;i<n;i++)
    {
         cin>>B[i];
    }
    cout<<endl;
    cout<<"Araay 1:  ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<"  ";
    }
    cout<<endl;
    cout<<"Araay 2: ";
    for(int i=0;i<n;i++)
    {
        cout<<B[i]<<"  ";
    }
    cout<<endl;
    int x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i]==B[j])
            {
                C[x]=B[j];
                x++;
            }
        }
    }
     if(x>0)
     {
         cout<<"The new array is: ";
         for(int i=0;i<x;i++)
         {
             cout<<C[i]<<"  ";

         }
     }
     else
     {
         cout<<"No common elements is here: "<<endl;

     }

    return 0;
}
