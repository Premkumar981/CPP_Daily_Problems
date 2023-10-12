#include <iostream>
using namespace std;
class B1
{
	public:
		void show_data()
		{
			cout<<"\nIn the Base class 1";
		}
};
class B2
{
	public:
		void show_data()
		{
			cout<<"\nIn the Base class 2";
		}
};
class D:public B1,public B2
{
	public:
		/*void display()
		{
		B1::show_data();
		B2::show_data();
	}*/
};
int main()
{
	D obj;
	//obj.show_data();	//--Ambiguity problem
	//solution
	obj.B1::show_data();
	obj.B2::show_data();
	//or
	//obj.display();
	return 0;
}
