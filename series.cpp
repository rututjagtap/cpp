#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"enter the number:- ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
		cout<<i<<"*"<<i<<"="<<i*i<<"\n";
	}
	cout<<"sum of series is:-"<<sum;

}