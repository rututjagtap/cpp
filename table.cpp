#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"enter the num";
	cin>>num;
	cout<<"table of"<<num;
	for(i=1;i<=10;i++)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<"/n";
	}
return 0;
}