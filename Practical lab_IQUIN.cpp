#include <iostream>
using namespace std;

//Create a C/C++ program that will produce an output of sum of 10 numbers less than 5 using For.. Loop
int main(){
	int sum = 0;
	int number;
	
	cout<< "Enter 10 numbers that is less than 5"<< endl;
	
		for( int i = 0; i < 10; i++){
			do {
				cout<< "Enter a number"<< i + 1<<":";
				cin>> number;
				
				if (number >=5){
					cout<< "Please enter a number less than 5."<< endl;
				}
			} while (number >=5); 
			
			sum += number; //add the number to the sum
		}
		cout<< "The sum of the 10 numbers is: "<<sum<<endl;
		
		return 0;
}
