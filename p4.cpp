/*
Topic:Arithmetic operations
----- ------------------------
Operators: + - * / % 

Author:Mr.Palani Karthikeyan
*/
#include <iostream>
using namespace std;
int TOTAL=200; //global variable
int main(){
	int v1=100;
	float v2=105.45;
	cout<<"Sum of v1+v2:"<<v1+v2<<endl;
	cout<<"TOTAL value:"<<TOTAL+50<<endl;
	int result=TOTAL-v1;  //substraction
	cout<<"Result:"<<result<<endl;
	cout<<"Multiplication:"<<v1*v2<<endl; 
	cout<<"Avg:"<<456/5<<endl;
	int r=v1%3; //remainder value
	cout<<"value of r is:"<<r<<endl;
	return 0;
}
