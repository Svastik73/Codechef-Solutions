#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            }
    sort(arr,arr+n);
     int sm=arr[1]-arr[0];
     for(int i=1;i<n-1;i++){
         if(arr[i+1]-arr[i]<sm) sm=arr[i+1]-arr[i];
     }
        cout<<sm<<endl;      
    }
			return 0;
}
