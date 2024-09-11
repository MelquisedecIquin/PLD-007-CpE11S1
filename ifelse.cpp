#include <iostream>
using namespace std;

int main()
{
	// initialization of variables
	int x;
	int y;
	
	//input the values of the given variables
	cout<<"input two integers:"<<endl;
	cout<<"Input the value of x;
	cin>>x;
	cout<<"input the value of y";
	cin>>y;
	
	//process , compare if x>y,x<y, x=y
	
	if (x>y)
	{
		cout<<"x is greater than y"<<endl;
	}
	else if(x<y)
	{
		cout<<"x is less than y";
	}
	else
	{
		cout<<"x is equal to y";
	}
	
	
	return 0;
}
