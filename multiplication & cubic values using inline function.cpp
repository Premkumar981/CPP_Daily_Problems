//Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
class demo{
	public:
		int a;
		int b;
		void sum(int,int );
		void product(int,int );
		void cubic(int,int );

};
inline void demo::sum(int a,int b){
	cout<<"Sum of two numbers is : "<<a+b<<endl;
}
inline void demo::product(int a,int b){
	cout<<"product of two numbers is : "<<a*b<<endl;
}
inline void demo::cubic(int a,int b){
	cout<<"cubic of first numbers is : "<<a*a*a<<endl;
	cout<<"cubic of second numbers is : "<<b*b*b<<endl;

}
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	demo k;
	k.sum(a,b);
	k.product(a,b);
	k.cubic(a,b);

}
