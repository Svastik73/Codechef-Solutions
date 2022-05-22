#include<bits/stdc++.h>
using namespace std;

void calc(){
	float a,b;
	cin>>a>>b;
	char c; cin>>c;
	if(c=='+') cout<<a+b<<endl;
	else if(c=='-') cout<<a-b<<endl;
	else if(c=='*') cout<<a*b<<endl;
	else if(c=='/') cout<<fixed<<setprecision(8)<<a/b<<endl;

	
}

int main(){
 	int t;
 	cin >> t;
while(t--){
		calc();
 	}
}
