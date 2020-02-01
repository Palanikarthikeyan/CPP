/*
Topic: Logical operators
relational operators in C++: && || !
----------------------------
expressions with logical operators returns boolean value(True/False)

============================================================
boolean table
---------------
logical AND &&
------------------
Condition1	Condition2	Result
----------------------------------------
True		True		True
True		False		False
False		True		False
False		False		False
-----------------------------------------

logical or ||
-----------------
Condition1	Condition2	Result
----------------------------------------
True		True		True
True		False		True	
False		True		True		
False		False		False
-----------------------------------------

logical not !

Condition -->True --> ! -->False
Condition -->False --> ! -->True
============================================================

Author:Mr.Palani Karthikeyan
*/

#include <iostream>
using namespace std;
int enqo=550;
int main(){
	// test enquiry number range between 501-599

	if(enqo >500 && enqo<600){ // both condition must be True
		cout<<"Validenquiry number."<<endl;
	}else{
		cout<<"Invalid enquiry number"<<endl;
	}
	int qno=650;
	
	/*test quotation number is 650 or 750
	  any one number is matched - Valid quotation
	*/
	if(qno == 650 || qno == 750){
		cout<<"Quotation number:"<<qno<<endl;
	}else{
		cout<<"Sorry given quotation is not valid\n";
	}
	
	if(!(10==10)){ //logical not ! operator- opp.of testing 
		cout<<"True block\n";
	}else{
		cout<<"False block\n";
	}
	return 0;
	
}
