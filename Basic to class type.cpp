#include <iostream>
using namespace std;
class time
{
	int hours;
	int minutes;
	public:
		time(int t)
		{
			hours=t/60;
			minutes=t%60;
		}
		void display()
		{
			cout<<"The time is: "; 
			cout<<hours<<"hrs and "<<minutes<<"mins";
		}
};
int main()
{
	time t1(90);
	t1.display();
	return 0;
}
