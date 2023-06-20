#include<iostream>
using namespace std;
 int main( )
{
      int transpose[10][10], r=3, c=3, i, j;
      int  s[3][3];

      cout<<"Matrix Input is:"<<endl;
	  for(i=0;i<4;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		cout<<"["<<i<<"]["<<j<<"]=  ";
	  		cin>>s[i][j];
		}
	  }

	  cout<<"And The Matrix is:"<<endl;
      for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		cout<<"\t"<<s[i][j];
		}
		cout<<endl;
	  }
	  for(i=0; i<r; ++i)
for(j=0; j<c; ++j) {
   transpose[j][i] = s[i][j];
}
	  cout<<"The transpose of the matrix is:"<<endl;
for(i=0; i<c; ++i) {
   for(j=0; j<r; ++j)
   cout<<transpose[i][j]<<" ";
   cout<<endl;
}
}
