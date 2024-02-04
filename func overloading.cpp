#include<iostream>
using namespace std;

//area of square
void area(int a)
{
	int area = a*a;
	cout<<"Area of square "<<area<<endl;
}

//area of circle
void area(float c)
{
	float area = 3.14*c*c;
	cout<<"Area of circle "<<area<<endl;
}

//area of rectangle
void area(int l,int b)
{
	int area = l*b;
	cout<<"Area of rectangle "<<area<<endl;
}

int main(){
	area(4);
	area(5,4);
	area(float(2.0));
	
	return 0;
}

