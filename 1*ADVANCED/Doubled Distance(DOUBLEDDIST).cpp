#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t; cin>>t;
while(t--){
   int n; cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int flg=0;
   sort(arr,arr+n);
   for(int i=1;i<n-1;i++){
       if((arr[i]-arr[i-1])>(arr[i+1]-arr[i])){
           if((arr[i]-arr[i-1])/(arr[i+1]-arr[i])!=2){
               cout<<"No\n";
               flg++;
               break;
           }
       }
       else if((arr[i]-arr[i-1])<(arr[i+1]-arr[i])){
           if((arr[i+1]-arr[i])/(arr[i]-arr[i-1])!=2){
               cout<<"No\n";
               flg++;
               break;
           }
       }
    
   }
    if(flg==0) cout<<"Yes\n";
    
}


    
}
