#include <iostream>
using namespace std;

int main() {
int t; cin>>t;
while(t--){
int n,x,y; cin>>n>>x>>y;

int str;
if(x-1<=n-x)  str=x-1;
else str=n-x;
int dia;
if(y-1<=n-y) dia=y-1;
else dia=n-y;


int min;
if(dia<=str) min=dia;
else min=str;

cout<<3*(n-1)+2*min<<endl;
}
}
