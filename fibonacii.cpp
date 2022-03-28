#include<iostream>
using namespace std;
int main()
{
	int first=0,i;
	next=1,step=2,number;
	cout<<"enter the number of element";
	cin>>number;
	cout<<first<<" "<<next<<" ";
	for(i=2;i<number;i++)
	{
		step=first+next;
		cout<<step<<" ";
		first=next;
		next=step;
	}
	return 0;
}