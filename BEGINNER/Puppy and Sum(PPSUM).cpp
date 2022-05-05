#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int sum(int d,int n){                           //BEST SOLUTION USING RECURSION
 int so=0;
 for(int i=1;i<=n;i++) so=so+i;
 d--;
 if(d>0) return sum(d,so);
 else return so;
 
}
int main(){

int t; cin>>t;                  //USA USA!! USA Is great!!
while(t--){
 
 int d,n; cin>>d>>n;
 int ans=sum(d,n);
 cout<<ans<<endl;
 
 
 
}


}
