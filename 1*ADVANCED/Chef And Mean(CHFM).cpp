#include <iostream>
using namespace std;
#define ll long long
int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    ll sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	       sum=sum+arr[i];
	        
	    }
	       int flg=0;
	       ll  avg=sum/n;
	       if(sum%n==0){
	       for(int i=0;i<n;i++){
	           if(arr[i]==avg){
	               cout<<i+1<<endl;
	               flg=1;
	               break;
	               
	           }
	       }
	       
	       if(flg==0) cout<<"Impossible\n";
	       }
	       else cout<<"Impossible\n";
	       
	}
}
