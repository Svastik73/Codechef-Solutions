#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n;
	     cin>>n;
	     char s[n]; cin>>s;
	     int ans=0;
	     int i=0; int j=n-1;
	     while(i<=j){
	         if(s[i]=='('&&s[j]==')'){
	             i++; j--;
	         }
	         else if(s[i]=='('&&s[j]=='('){
	             ans++; j--;
	         }
	         else if(s[i]==')'&&s[j]==')'){
	             ans++;
	             i++;
	         }
	         else 
	         {
	             ans+=2;
	             i++;
	             j--;
	         }
	     }
	     cout<<ans<<endl;
	     
	}
}
