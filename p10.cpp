/*
Q.Write a C++ program:
----------------------
Read a business enquiry number from <STDIN>
Test whether the input enquiry number ranges between 501 and 599
If input enquiry number is valid, read a quotation number from <STDIN>
Test whether the input quotation number ranges between 501 and 800
If quotation number is valid read a test whether the PO number ranges between 500 and 1000.
if input PO number is valid display all input details(enquiry number,quotation,PO)
Note: above is dependency based task. Hence try nested condition style.

Author:Mr.Palani Karthikeyan
*/
#include <iostream>
using namespace std;

int main(){
	int eno,qno,po;
	cout<<"Enter a business enquiry number:";
	cin>>eno; //interface to keyboard(STDIN)
	if(eno >500 && eno <600){
		cout<<"Enter a quotation number:";
		cin>>qno;
		if(qno >500 && qno<800){
			cout<<"Enter a PO number:";
			cin>>po;
				if(po>=500 && po<=1000){
					cout<<"Business details:-"<<endl;
					cout<<"******************************"<<endl;
					cout<<"Enquiry number:"<<eno<<endl;
					cout<<"Quotation number:"<<qno<<endl;
					cout<<"PO Number:"<<po<<endl;
					cout<<"******************************"<<endl;
				}else{
					cout<<"Sorry input PO number is not valid\n";
				}
		}else{
			cout<<"Sorry your input quotation is invalid\n";
		}
	}else{
		cout<<"Sorry given enquiry number is invalid"<<endl;
	}
	return 0;
}
