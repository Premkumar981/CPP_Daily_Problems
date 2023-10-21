#include <iostream>
using namespace std;
int main(){
	int*pvalue = NULL;
	pvalue = new int;
	*pvalue = 23;
	cout<<"Address where pointer is pointing before deletion:"<<pvalue<<endl;
	delete pvalue;
	cout<<"Address where pointer is pointing after deletion:"<<pvalue<<endl;
	pvalue=NULL;
	cout<<"\n"<<pvalue;
	return 0;
}
