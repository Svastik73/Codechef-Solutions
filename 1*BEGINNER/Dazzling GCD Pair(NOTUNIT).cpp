#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
     int tc;  cin >> tc;
     while (tc--) {
  int a,b; cin>>a>>b;
  if(a%2==0&&(a+2)<=b){
   cout<<a<<" "<<a+2<<endl;
  }
  else if(a%3==0&&(a+3)<=b){
   cout<<a<<" "<<a+3<<endl;
  }
  else if((a+3)<=b&&a%2!=0){
   cout<<a+1<<" "<<a+3<<endl;
  }
  else cout<<-1<<endl;
  
  
  
  
  
         }
}
