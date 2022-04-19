#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t; cin>>t;
while(t--){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=n-1;i>=0;i--){
         if(arr[i]==1||arr[i]==2||arr[i]==3||arr[i]==4||arr[i]==5||arr[i]==6||arr[i]==7){
           cout<<i+1<<endl;  
           break;
           
         }
     
         
     }
    
    
    
           }

      }
