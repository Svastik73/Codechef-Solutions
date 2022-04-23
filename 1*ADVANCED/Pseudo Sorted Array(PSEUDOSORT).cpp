#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>

using namespace std;
int main()
{
int t; cin>>t;
while(t--){
 
int x; cin>>x;

int arr[x],tem[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
    tem[i]=arr[i];
    
}

sort(tem,tem+x);

for(int i=0;i<x-1;i++){
    if(arr[i]>arr[i+1]){
            int tempo=arr[i];
            arr[i]=arr[i+1];
                   arr[i+1]=tempo;
                   break;
                   
                   
    }
}
int temp=0;
for(int i=0;i<x;i++){
    if(arr[i]!=tem[i]){
        cout<<"NO\n";
        temp=1;
        break;
    }
}
if(temp==0) cout<<"YES\n";


 
}
 
}
