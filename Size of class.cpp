#include<iostream>
using namespace std;
class A
{
int arr[15];
};
class B{};
class C: public A, public B{
	public:
		void show(){
			cout<<"I am member of C";
		}
};
int main(){
	C obj1;
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
	cout<<sizeof(C)<<endl;
}
