#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){  
int t; cin>>t;
while(t--){
  
  int n,x;
  cin>>n>>x;
  int arr[n-1];
  int sum=0;
  for(int i=0;i<n-1;i++){ 
    cin>>arr[i];
  sum=sum+arr[i];
  
      }
      int nt=n*x-sum;
      if(nt<0) cout<<0<<endl;
      else cout<<nt<<endl;
      
      
      
  
}
  
}
