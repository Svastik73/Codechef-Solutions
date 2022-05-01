#include <iostream>
using namespace std;

int main() {
	
	int t,i;
	cin>>t;
	while(t--){
	   long long int n;
	   int m=0;
	    cin>>n;
	    long long int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	   long long int c=a[0];
	   int d=0;
	     for(i=1;i<n;i++){
	         if(a[i]>c){
	              d=a[i]-c;
	              m=max(m,d);
	         }
	         else{
	             c=a[i];
	         }
	     }
	     if(m==0) cout<<"UNFIT"<<endl;
	     else cout<<m<<endl;
	    
	}
	return 0;
}
