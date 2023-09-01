#include<iostream>
using namespace std;
int main(){
	int i,num,rev=0,remainder=0;
	cout<<"Enter the num: ";
	cin>>num;
	while(num!=0)
	{
		remainder=num%10;
		rev=rev*10+remainder;
		num=num/10;
	}
	
	cout<<"Revrese of a number is: "<<rev;
	
}
