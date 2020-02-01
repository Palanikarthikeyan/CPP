/*
Topic: Relational operators
relational operators in C++: ==, !=, >, <, >=, <=
----------------------------
expressions with relational operators returns boolean value(True/False)
when the expression results a boolean value,conditional statements can 
be used to validate.

Author:Mr.Palani Karthikeyan
*/

#include <iostream>
using namespace std;
int enqo=550;
int main(){
	int v1=450;
	int v2=670;
/* if only style */
	if(v1 == v1){
		cout<<"True only style"<<endl;

/* if ..else style */
	cout<<"if..else style"<<endl;
	if(enqo<500){
		cout<<"Valid enquiry number:"<<enqo<<endl;
	}else{
		cout<<"Invalid enquiry number:"<<enqo<<endl;
	}
	}
/* multi conditional statements */
	if(v1 == v2){
		cout<<"True block(1)"<<endl;
	}else if(v1<500){
		cout<<"True block(2)"<<endl;
	}else if(v1>500){
		cout<<"True block(3)"<<endl;
	}else{
		cout<<"False block";
	}
}
