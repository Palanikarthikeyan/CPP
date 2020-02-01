/*
Topic: increment/decrement operators
-----    ++       --
Author: Mr.Palani Karthikeyan
*/
#include <iostream>
using namespace std;
int main(){
	int i=5,n=5;
	cout<<"i++ "<<i++<<endl; // initialized then increment
	cout<<i<<endl;
	cout<<"++n "<<++n<<endl; //increment then initialized
	int j=15,k=15;
	cout<<"j-- "<<j--<<endl; // initialized then decrement
	cout<<"--j "<<--j<<endl; // decrement then initialized
	return 0;
}
