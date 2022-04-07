#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n=4;
	char ch='A';
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
          cout<<ch++;
          cout<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}