#include<iostream>
using namespace std;
int main(){
	int a[2][2] = {1,2,3,4};
	int b[2][2],mul[2][2];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	cout<<"First Matrix is: "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<a[i][j];
			cout<<" ";
		}
	}
	return 0;
}
