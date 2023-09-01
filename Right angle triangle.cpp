#include<iostream>
using namespace std;
int main()
{
	int i,j,number;
	cout<<"Enter the number of rows: ";
	cin>>number;
	for(i=0;i<number;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}
