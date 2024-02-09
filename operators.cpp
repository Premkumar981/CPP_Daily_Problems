#include <iostream>
using namespace std;
int main(){
	int a = 10;
	int b = 5;
	int c;
	//arithmetic operators
	c = a+b;
	cout<<c<<endl;
	c = a-b;
	cout<<c<<endl;
	c = a*b;
	cout<<c<<endl;
	c = a/b;
	cout<<c<<endl;
	c = a%b;
	cout<<c<<endl;
	
	//unary operators
	c = -a;
	cout<<c<<endl;
	
	//assignment operators
	c = a;
	cout<<c<<endl;
	
	c = 20;
	c += 1;
	cout<<c<<endl;
	
	//relational operators
	c = (a>b);
	cout<<c<<endl;
	
	//logical operators
	cout<<(a<b)<<endl; //prints 0 because false
	cout<<((a<b)||(a>b))<<endl; //OR operator
	cout<<((a<b)&&(a>b))<<endl; //AND operator
	
	//Bit-wise operators
	cout<<(2&3)<<endl; //AND ops
	cout<<(2|3)<<endl; //OR ops
	
	//shifting operators
	cout<<(4>>2)<<endl;
	cout<<(4<<2)<<endl;
	
	return 0;
}
