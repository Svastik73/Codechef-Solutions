#include <iostream>
#include<bits/stdc++.h>
#define long long ll;

using namespace std;                     //USA !! USA!!
int main() {
int t; cin>>t;
while(t--){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    
int coo=0;
int la=arr[n-1];
int fir=0,sec;

if(n==1) cout<<la<<endl;
else
{ 
for(int i=n-1;i>0;i--){
    if(arr[i]==arr[i-1]) coo++;
    else if(fir==0)
    {
      fir=arr[i]+coo;
      coo=0;
    }
    else if(fir>0){
        if(arr[i]+coo>fir) fir=arr[i]+coo;
coo=0;
    }
}

cout<<fir<<endl;


}
}

}
