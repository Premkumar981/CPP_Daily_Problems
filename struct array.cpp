#include<iostream>
using namespace std;
struct employee{
	string name;
};
int main(){
	employee e[5];
	int i;
	for(i=0;i<=5;i++){
		cout<<"Enter the name of the employee:"<<endl;
		cin>>e[i].name;
	}
	cout<<"\n Name of all employees: \n";
	for(i=0;i<5;i++)
	{
		cout<<e[i].name<<endl;
	}
	return 0;
}
