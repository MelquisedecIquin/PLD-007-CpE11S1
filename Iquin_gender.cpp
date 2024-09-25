#include <iostream>
using namespace std;

int main(){
	
	//create a c++ program to determine gender
	char gender;
	
	cout<<"enter the gender output: ";
	cin>> gender;
	
	switch(gender){
		case 'M':
			cout<<"gender is MALE"<<endl;
			cout<<"Masculine, Strong, Deep Voice, Taller"<<endl;
			break;
		case 'F':
			cout<<"gender is FEMALE"<<endl;
			cout<<"Feminine, Soft Voice, Short"<<endl;
			break;
		default:
			cout<<"Invalid gender output"<<endl;
			break;			
	}
	return 0;
}
