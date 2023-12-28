#include <iostream>

using namespace std;
class A{
    public:
   
    virtual void print()=0;
};
class B: public A{
    public:
    int x=9;
    int EvenOrOdd(int a) {
        if(a%2==0) return 1;
        else return 0;
    }
    int cube(int n) {
        return (n*n*n);
    }
    int square(int n) {
        return (n*n);
    }
    int sum(int a,int b){
        return (a+b);
    }
    int sub(int a,int b) {
        return (a-b);
    }
    void print() override{
        cout<<x;
    }
};

int main()
{
   int n;
   cin>>n;
   B ob;
   
   if(ob.EvenOrOdd(n)==1){
       ob.x=ob.sum(ob.cube(n),ob.square(n));
       ob.print();
   }
   else{
       ob.x=ob.sub(ob.cube(n),ob.square(n));
       ob.print();
   }
   
   return 0;
}
