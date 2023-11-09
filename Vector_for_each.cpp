#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void show(int n)
{
	cout<<n<<" ";
}
int main(){
	int arr[] = {12, 3, 17, 8};		// standard C array
	vector<int> v(arr, arr+4);		// initialize vector with C array
	for_each (v.begin(), v.end(), show);	// apply function show to
}
