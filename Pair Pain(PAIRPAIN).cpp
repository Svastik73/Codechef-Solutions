#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;


int main(){
  
    int t; cin>>t;
    while(t--){
     long long int n; cin>>n;
    long long  int arr[n];
    long long  int on=0,tw=0;
      
      
      for(long long int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) on++;
        else if(arr[i]==2) tw++;
           }
            
      long long int tot=0;
      if(on>1){
        tot=tot+((on*(on-1))/2);
      }
      if(tw>1){
        tot=tot+((tw*(tw-1))/2);
      }
      tot=tot+on*(n-on);
    cout<<tot<<endl;
    
}


}
