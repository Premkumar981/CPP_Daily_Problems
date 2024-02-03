#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int a = 10;
	int* p=&a;
	*p = 20;
	cout<<"A is "<<a<<endl;
	
	int *pa = (int*)malloc(1*sizeof(int));
	*pa = 23;
	cout<<"pa"<<*pa<<endl;
	
	int *qa = (int*)calloc(1,sizeof(int));
	*qa = 23;
	cout<<"qa"<<*qa<<endl;
	
	delete qa;
	cout<<"After deleting"<<endl;
	cout<<"pa"<<*pa<<endl;
	cout<<"qa"<<*qa<<endl;	//throws some garbage value
	
	return 0;
}
