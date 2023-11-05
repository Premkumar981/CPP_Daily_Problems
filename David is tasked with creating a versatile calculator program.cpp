#include<bits/stdc++.h>
using namespace std;
int calc(int a)
{
    return (a*a);
}
int calc(int a, int b)
{
    return (a%b);
}
float calc(float a, float b)
{
    return (a/b);
}
int main()
{
    int x,y,ch;
    float n1,n2;
    cin>>x>>y>>n1>>n2;
    cout<<"Square of "<<x<<": "<<calc(x)<<endl;
    cout<<"Modulus of "<<x<<", "<<y<<": "<<calc(x,y)<<endl;
    cout<<"Quotient of "<<n1<<", "<<n2<<": "<<fixed<<setprecision(2) <<calc(n1,n2);
    return 0;
}
