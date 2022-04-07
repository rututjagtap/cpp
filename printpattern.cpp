#include<iostream>
using namespace std;
int main()
{
	int col=4;
	while(col>=1)
	{
	int row=1;
	while(row<=4)
	{
	if(col<=row)
	cout<<"*";
	else
	cout<<" ";
	row++;
	}
	col--;
	cout<<"\n";
	}
}
