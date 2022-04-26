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
        int count=0; int net=0;
        for(int i=0;i<a-1;i++){
            if(arr[i]==arr[i+1]) count++;
            else if(count>0){
                        
            net +=count;
            count=0;
            
            
            }
        }
        cout<<a-(net+count)<<endl;
        
        
        
        
    }
    
            }
