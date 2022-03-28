#include<iostream>
using namespace std;
int main()
{
	int num,result,sum=0;
	cout<<"enter the number";
	cin>>num;
	while(num>0)
	{
		result=num%10;
		sum=sum+result*result*result;
		num=num/10;
	}
	if(sum==num)
	cout<<"reverse number is:-"<<sum;

}