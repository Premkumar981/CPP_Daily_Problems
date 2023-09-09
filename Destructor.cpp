#include<iostream>
using namespace std;
class student
{
	public:
    student()
    {
        cout<<"Constructor Intialized"<<endl;
    }   
    ~student(){
    	cout<<"Destructor Initialized";
	}
     
 
};
 
int main()
{
    student s;
    return 0;
 
}
