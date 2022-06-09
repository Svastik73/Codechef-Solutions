#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t; cin>>t;
  while(t--){
int n; cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];


   if(n==1||n==2) cout<<"YES\n";
   else
   {
       bool flg=true;

       int s; int l;
       if(arr[0]>arr[1]){
           l=arr[0];
           s=arr[1];
       }
       else if(arr[0]<=arr[1]){
           l=arr[1];
           s=arr[0];
       }
       for(int i=2;i<n;i++){
           if(arr[i]>s && arr[i] < l){
               flg=false;
               break;
           }
           if(arr[i]>=l) l=arr[i];
           else if(arr[i]<=s) s=arr[i];
       }

       if(flg==true) cout<<"YES\n";
       else cout<<"NO\n";

   }


}
}
