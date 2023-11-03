#include <bits/stdc++.h>

#include<cmath>

using namespace std;

class Icecream {

public:

float Quantity(int r) {

return r*r*r;

}

float Quantity(int r, int h) {

return 0.33*M_PI*r*r*h;

}

};

int main() {

Icecream obj;

int i,n,r,h;

cin>>n;

if(n==1) {

cin>>r;

cout<<fixed<<setprecision(2)<<obj.Quantity(r);

}

if(n==2) {

cin>>r>>h;

cout<<fixed<<setprecision(2)<<obj.Quantity(r,h);

}

return 0;

} 
