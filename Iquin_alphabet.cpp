#include <iostream>
using namespace std;

int main()  {
	//create a c++ program to determine if alphabet is vowel or consonant
	char c;
	
	cout<<"enter a letter:";
	cin>>c;
	
	switch(c)	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
	cout<<"is a vowel";
	break;
	
	default:
		{
			cout<<"is a consonant";
			break;
		}
	
	}
return 0;	
	
}
