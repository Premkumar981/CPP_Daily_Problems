#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream of("result.txt");
	of<<"This is my first program in c++ for file handling!";
	of.close();
	cout<<"Data saved";
}
