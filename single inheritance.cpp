#include<iostream>
using namespace std;
class B
{
	int a;
	public:
		int b;
		void get_ab();
		int get_a();
		//int get_b;
		void show_a();
};

class D:public B
{
	int c;
	public:
		//int get_c();
		void mul(void);
		void display(void);
};
void B::get_ab(void)
{
	a=5;b=10;
}
int B::get_a()
{
	return a;
}
void B::show_a()
{
	cout<<"a="<<a<<"\n";
}
void D::mul()
{
	c=b*get_a();
}
void D::display()
{

	cout<<"a="<<get_a()<<"\n";
	cout<<"b="<<get_b()<<"\n";
	cout<<"c="<<get_c()<<"\n";
}

int main()
{
	D d;
	d.get_ab();
	d.mul();
	d.show_a();
	d.display();
	d.b=20;
	d.mul();
	d.display();
	return 0;
}
