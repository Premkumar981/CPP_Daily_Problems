#include<iostream>
//#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int arr[]={12,3,17,8};
	vector<int> v(arr,arr+4);
	for(vector<int>::iterator i=v.begin();i!=v.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}
