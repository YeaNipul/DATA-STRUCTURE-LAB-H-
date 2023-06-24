#include<iostream>
using namespace std;

    int main(){
        int n, i,*ptr, sum=0;
        cout << "Array number: ";
        cin >> n;
        ptr = new (nothrow) int[n];
        if(ptr==NULL){
            cout << "Error! not allocated.";
            return 1;
        }
        cout << "Enter elements:"<<endl;
        for(i=0;i<n;++i){
            cin >> *(ptr+i);
            sum += *(ptr+i);
        }
        cout << "Sum = " << sum;
        delete [] (ptr);

}

