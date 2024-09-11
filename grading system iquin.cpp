#include <iostream>
using namespace std;

int main()
{
	float grade;
	// initialization of grades

	cout<<"INPUT GRADE:";
	cin>>grade;
	
	//process
			
	if ((grade<100)&&(grade>=93.99)){
		cout<<"1.00"<<endl;
		cout<<"EXCELLENT"<<endl;
	}
	else if ((grade<93.99)&&(grade>=88.5)){
		cout<<"1.25"<<endl;
		cout<<"SUPERIOR"<<endl;
	}
	else if ((grade<88.49)&&(grade>=83)){
		cout<<"1.50"<<endl;
		cout<<"Meritorious"<<endl;
	}
	else if ((grade<83)&&(grade>=77.5)){
		cout<<"1.75"<<endl;
		cout<<"Very good"<<endl;
	}
	else if ((grade<77.5)&&(grade>=72)){
		cout<<"2.00"<<endl;
		cout<<"Good"<<endl;
	}
	else if ((grade<=72)&&(grade>=65.5)){
		cout<<"2.25"<<endl;
		cout<<"Very Satisfactory"<<endl;
	}
	else if ((grade<65.5)&&(grade>=61)){
		cout<<"2.50"<<endl;
		cout<<"Satisfactory"<<endl;
	}
	else if ((grade<=61)&&(grade>=55.5)){
		cout<<"2.75"<<endl;
		cout<<"Fair"<<endl;
	}
	else if ((grade<55.5)&&(grade>=50)){
		cout<<"3.00"<<endl;
		cout<<"Passing"<<endl;
	}
	else if ((grade<=50)&&(grade>=49.99)){
		cout<<"4.00"<<endl;
		cout<<"Incomplete"<<endl;
	}
	else{
		cout<<"5.00"<<endl;
		cout<<"Failed"<<endl;
	}
	return 0;
}
