#include <iostream>
using namespace std;

int main()  {
	//create a c++ program that applies MDAS calculator
	int x,y, result;
	char c;
	
	cout<<"enter first number: ";
	cin>> x;
	
	cout<<"enter operator: ";
	cin>> c;
	
	cout<<"enter second number: ";
	cin>> y;
	
	switch(c)	{
	 	case '+': result = x+y;
	 	break;
    	case '-': result = x-y;
		break; 
        case '*': result = x*y;
		break; 
        case '/': result = x/y;
        break;
	}
	cout<<"Result:"<< result<<endl;
return 0;
	
}
