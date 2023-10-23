#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){ 
	int *arr;
	int size;
	cout<<"\nEnter the size of integer array: ";
	cin>>size;
	cout<<"\nCreating an array of size"<<size;
	arr = new int[size];
	if(arr == NULL)
	{
		cout<<"\nProblem in memory allocation";
		exit(1);
	}
	else
	{
		cout<<"\nDynamic allocation of memory for array arr is successfull.";
		cout<<"\nEnter the array elements:";
		for(int i=0;i<size;i++)
		{
			cin>>*(arr+i);
		}
		cout<<"\nEntered elements are:";
		for(int i=0;i<size;i++)
		{
			cout<<"\n"<<*(arr+i);
		}
	}
	delete []arr;
	cout<<"\nMemory deallocated";
	return 0;
}
