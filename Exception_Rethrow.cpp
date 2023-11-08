#include <iostream>
using namespace std;
void divide(double x, double y)
{
	cout<<"Inside function"<<endl;
	try
	{
		if(y==0.0)
		throw 42.0;
		else
		cout<<"division "<<x/y<<endl;
	}
	catch(double i)
	{
		cout<<"caught double inside function"<<i<<endl;
		throw 14.20;
	}
	cout<<"end of function"<<endl;
}
int main(){
	cout<<"Inside main"<<endl;
	try
	{
		divide(10.5,2.0);
		divide(20.0,0.0);
	}
	catch(double j)
	{
		cout<<"caught double inside main"<<j<<endl;
	}
	cout<<"end of main"<<endl;
	return 0;
}

