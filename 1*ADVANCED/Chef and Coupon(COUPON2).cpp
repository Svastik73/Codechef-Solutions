#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int d,c;
	    cin>>d>>c;
	   int arr[3],arr1[3];
     int d1 = 0, d2=0;
     for(int i=0;i<3;i++){
     cin>>arr[i];
     d1=d1+arr[i];
     
     }
	    for(int i=0;i<3;i++){
     cin>>arr1[i];
     d2=d2+arr1[i];
     
     }
	    int cop=d1+d2+c ,no = d1+d2+d+d;
	    if(d1<150)
	       cop+=d;
	    if(d2<150)
	       cop+=d;

	    if(cop<no)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    
	    
	    
	}
	return 0;
}
