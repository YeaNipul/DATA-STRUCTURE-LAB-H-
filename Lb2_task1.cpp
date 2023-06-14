#include<iostream>
using namespace std;
int main()
{



    int a = 5;
    int b = 8;
    int arr1[a];
    int arr2[b];
    int arr3[a+b];



    cout<<"Enter the elements of this array 1:"<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>arr1[i];
    }
    cout<<endl;
    cout<<"Enter the elements of this array2:"<<endl;
    for(int i=0;i<b;i++)
    {
        cin>>arr2[i];
    }
  cout<<endl;

  for(int i=0;i<a;i++)
  {
      arr3[i]=arr1[i];
  }
  for(int i=0;i<b;i++)
  {
      arr3[a+i]=arr2[i];
  }
  cout<<"Array 1: ";
  for(int i=0;i<a;i++)
  {
      cout<<arr1[i]<<" ";
  }
  cout<<endl;
  cout<<"Array2: ";
  for(int i=0;i<b;i++)
  {
      cout<<arr3[i]<<"  ";
  }
  cout<<endl;
  cout<<"the merged array in reverse order is: ";
  for(int i=a+b-1;i>=0;i--)
  {
      cout<<arr3[i]<<" ";
  }
  return 0;
}
