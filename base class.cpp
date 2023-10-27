#include <iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"Hello world"<<endl;
		}
};

class B: public A
{
	public:
		void display(){
			cout<<"Hello class";
		}
};

int main(){
	A *pt = new B;
	pt->show();
	 
	B *ptr = new B;
	ptr->display();

//	B *pt = new B;
//	ptr->show();
	return 0;
}
