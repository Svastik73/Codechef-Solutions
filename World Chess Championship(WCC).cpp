
#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
typedef long long ll;
int main(){
int t;
cin>>t;
while(t--){
    int n; cin>>n;
    
    char arr[14];
    
    int car=0,che=0,dra=0;
    for(int i=0;i<14;i++){ 
        cin>>arr[i];
      if(arr[i]=='C') car++;
      else if(arr[i]=='N') che++;
      else dra++;
      
    
    
    
}
if(car>che) cout<<60*n<<endl;
else if(car<che)  cout<<40*n<<endl;
else cout<<55*n<<endl;



}

}
