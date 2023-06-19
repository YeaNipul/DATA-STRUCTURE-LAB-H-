#include<iostream>
using namespace std;
main( )
{
      int  s[4][3];
      int  i, j;
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
      for(i=0;i<4;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		cout<<"\t"<<s[i][j];
		}
		cout<<endl;
	  }
}
