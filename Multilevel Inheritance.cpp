#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
		public:
			void get_no(int);
			void put_no(void);
};
void student::get_no(int a)
{
	roll_no=a;
}
void student::put_no()
{
	cout<<"Roll number is"<<roll_no<<endl;
}
class test : public student
{
	protected:
		float sub1,sub2;
		public:
			void get_marks(float,float);
			void put_marks(void);
};
void test::get_marks(float x,float y)
{
	sub1=x;
	sub2=y;
}
void test::put_marks()
{
	cout<<"Marks in sub1"<<sub1<<endl;
	cout<<"Marks in sub2"<<sub2<<endl;
}
class result:public test
{
	float total;
	public:
		void display(void);
};
void result::display(void)
{
	total=sub1+sub2;
	put_no();
	put_marks();
	cout<<"Total = "<<total;
}
int main()
{
	result student1;
	student1.get_no(102);
	
	student1.get_marks(80.0,98.5);
	student1.display();
	
	return 0;
}
