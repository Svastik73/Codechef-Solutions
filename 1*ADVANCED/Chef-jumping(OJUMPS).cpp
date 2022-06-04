#include <iostream>                //usa usa!!!
//america

using namespace std;
#define ll long long
int main() {
	ll a; cin>>a;
	if((a-1)%6==0||(a-3)%6==0||(a-6)%6==0){
	    cout<<"yes\n";
	}
	else cout<<"no\n";
	
	return 0;
}




/*
1  3  6 
7  9  12
.
.
.
*/
