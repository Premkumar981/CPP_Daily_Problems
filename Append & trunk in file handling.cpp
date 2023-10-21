#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream op;
	op.open("K22QD.txt");
	op<<"Hello world";
	op.close();
	op.open("K22QD.txt",ios::app);
	op<<"I am batch K22QD";
	op.close();
	op.open("K22QD.txt",ios::trunc);
	op.close();
}
