/*
Topic: C++ shorthand assignment operators
------ -----------------------------------
Author:Mr. PalaniKarthikeyan
*/
#include <iostream>
using namespace std;
int main(){
int n=5;
float cost=1.45;

n+=1; //same as n=n+1
cout<<"N value:"<<n<<endl;
cost+=10.45; //same as cost=cost+10.45
cout<<cost<<endl;
int i=3; //dynamically we can declare and initialize 
i*=5; //i=i*3
cout<<"Value of i is:"<<i<<endl;
return 0;
}
