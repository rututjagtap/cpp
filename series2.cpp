#include<iostream>
using namespace std;
int main()
{
	int num=1,i,n;
	float sum,fact;
	cout<<"\nfind  the sum of series(1/1)+(2/2)+(3/3)+(4/4)+...+(n/n):\n";
	cout<<"\n";
	cout<<"enter the term:-";
	cin>>n;
	while(num<=n)
	{
		fact=1;
		for(i=1;i<=num;i++)
		{
			fact=fact*i;

		}
        sum=sum+(num/fact);
        num++;
        //cout<<"\n";	
      }
    cout<<"sum of series is"<<sum;
    return 0;
}