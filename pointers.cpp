#include <iostream>
using namespace std;
int main(){
	int a=5;
	cout<<"A is "<<a<<endl;
	cout<<"Address of A is "<<&a<<endl;	//& is address of a
	
	int *ap;
	ap = &a;
	cout<<"ap is "<<ap<<endl; 
	cout<<"A printed via ap is "<<*ap<<endl;
	
	
	return 0;
}
