#include<iostream>
using namespace std;

void say_hello(string x)
{
	cout<<"Hi "<<x<<endl;
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
int main(){
//	say_hello("Sai");
//	int k = add(3,5);
//	cout<<k<<endl;
	
	
	
	for(int i = 0;i<=5;i++)
	{
		if(i==3){
			break;	//will stop loop
			continue;	//will skip and prints rest of all
		}
		cout<<i<<endl;
		
	}
	
	return 0;
}
