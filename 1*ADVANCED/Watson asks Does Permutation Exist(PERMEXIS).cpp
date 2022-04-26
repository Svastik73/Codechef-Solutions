#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
    
    int n;
    
    cin>>n;
    
    while(n--){
        
        int a; cin>>a;
        
        int arr[a];
        
        for(int i=0;i<a;i++){
            cin>>arr[i];
            
        }
        
        sort(arr,arr+a);
        
        int flg=0;
        
        for(int i=0;i<a-1;i++){
            if(arr[i+1]-arr[i]!=0){
                flg=1;
                cout<<"NO\n";
                break;
             }
        }
        
        if(flg==0) cout<<"YES\n";
        
        
        
        
        
    }
    
            }
