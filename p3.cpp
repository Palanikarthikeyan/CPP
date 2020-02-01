/*
Topic: Types of variables based on the scope
-----------------------------------------------
1.Local variable
2.Global variable

1.Local variable
--------------------
Local variables are declared inside the braces of any user defined function, main function, loops or any control statements(if, if-else etc) and have their scope limited inside those braces.

2. Global variable
--------------------
A variable declared outside of any function (including main as well) is called global variable. Global variables have their scope throughout the program, they can be accessed anywhere in the program, in the main, in the user defined function, anywhere.
*/
#include <iostream>
using namespace std;
int count=0; // global variable
int main(){
	int n=5; //local variable
	cout<<"Value of count is:"<<count<<endl; //We can access global variable
	cout<<"Value of n is:"<<n<<endl; 
}
