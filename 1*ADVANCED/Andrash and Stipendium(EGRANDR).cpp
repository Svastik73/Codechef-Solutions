#include <iostream>
using namespace std;
#define ll long long
int main() {
int t; cin>>t;
while(t--){
    int n; cin>>n;
    int arr[n];
    int s=0;int full=0;int fail=0;
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
        arr[i]<2?fail++:arr[i]==5?full++,s=s+arr[i]:s=s+arr[i];
         }

    if(fail>0) cout<<"No\n";
    
    else if(full>0&&((float)s/n>=4.00)&&fail==0) cout<<"Yes\n";
    else cout<<"No\n";
}

}
