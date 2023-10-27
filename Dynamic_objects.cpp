#include <iostream>
using namespace std;
class base{
	public:
		base(){
			cout<<"Constructing base\n";
		}
		~base(){
			cout<<"Destructing base\n";
		}
};

class derived:public base{
	public:
		derivedl()
		{
			cout<<"Constructing derived\n";
		}
		~derivedl()
		{
			cout<<"Destruction derived\n";
		}
};
int main(){
	base *b = new derivedl;
	delete b;
	return 0;
}
