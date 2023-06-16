#include <iostream>
using namespace std;

  int main(){
    int a [10] = {12,32,43,1,54,53,15,64,31,3};
     int odd = 0;
     int even = 0;
     for(int i=0;i<10;i++)
     {
         if(a[i]%2==0){
            even++;
         }
         else{
            odd++;
         }
     }
     cout<<"odd number="<<odd<<endl;
     cout<<"even number="<<even<<endl;


return 0;
}
