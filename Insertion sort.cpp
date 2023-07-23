#include<iostream>
using namespace std;

void insertionSort(int array[], int n)
{
  for(int i=1; i<n; i++)
      {
        int temp=array[i];
        int j=i-1;
           while(j>=0 && array[j]>temp )
                {
                   array[j+1] = array[j];
                   j--;
                }
                array[j+1] = temp;
      }
}

void showdetails(int array[], int n)
{
    cout<<endl<<"After insertion sort : "<<endl;
    cout<<"Sorted array is : ";
    for(int i=0; i<n; i++)
        {
           cout<<array[i]<<"  ";
        }
}
int main(){
int n;
cout<<"Enter size of array : ";
cin>>n;

int array[n];
cout<<"Enter array number : "<<endl;
for(int i=0; i<n; i++)
{
   cout<<"array["<<i<<"]=";
   cin>>array[i];
}
cout<<"Array number are : "<<endl;
for(int i=0; i<n; i++)
{
  cout<<array[i]<<"  ";
}
insertionSort(array, n);
showdetails(array, n);

return 0;
}
