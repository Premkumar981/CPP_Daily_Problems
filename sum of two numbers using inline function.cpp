//Write a program to find sum of 2 integers using inline function.
#include <iostream>
using namespace std;
class demo{
	public:
		int a;
		int b;
		void sum(int a,int b);

};
inline void demo::sum(int a,int b){
	int c=a;
	int d=b;
	cout<<"Sum of two numbers: "<<a+b<<endl;
}

int main(){
	int a,b;
	cin>>a;
	cin>>b;
	demo k;
	k.sum(a,b);
}
