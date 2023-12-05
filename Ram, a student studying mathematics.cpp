#include <bits/stdc++.h>
using namespace std;
class Fun {
public:
    int fun1(int num1,int num2) {
        return num1+num2;
    }
    int fun1(int num1,int num2, int num3) {
       return num1*num2*num3;
    }
};
int main() {
    Fun obj;
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    if(n==2)
        cout<<obj.fun1(arr[0],arr[1]);
    else if(n==3)
        cout<<obj.fun1(arr[0],arr[1],arr[2]);
    else
        cout<<"Invalid Input";
    return 0;
}
