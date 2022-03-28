#include<iostream>
using namespace std;
int main()
{
	float num_1,num_2;
	int operation;
	cout<<"what arithmatic operation do you wnt to perform:\n";
	cout<<"press 1 for addition \n";
	cout<<"press 2 for substraction \n";
	cout<<"press 3 for multiplication \n";
	cout<<"press 4 for division \n";
	cin>>operation;
	cout<<"now enter two number \n";
	cin>>num_1>>num_2;

	switch(operation)

{
	case 1:
	cout<<"the addition result is:"<<num_1+num_2;
	break;
	case 2:
	cout<<"the substraction result is:"<<num_1-num_2;
	break;
	case 3:
	cout<<"the multiplication result is:"<<num_1*num_2;
	break;
	case 4:cout<<"the division result is:"<<num_1/num_2;
	break;

}

}
