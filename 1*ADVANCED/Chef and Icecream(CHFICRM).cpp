#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t; 
	 while(t--){
	   int n;
	   cin>>n;
	   int fiv=0, ten=0, 
	   arr[n];
	   int flag = 0;
	   
	   for(int i=0; i<n; i++){
	     cin>>arr[i];
	   }
	   for(int i=0; i<n; i++){
      if(arr[i]==5){
        fiv++;
      }
      else if(ar[i] == 10)
      {
        if(fiv >= 1){
          fiv--;
          ten++;
        }
        else
        {
          flag = 1;
          break;
        }        
      }
      else
      {
        if(ten > 0)
        {
          ten--;
        }
        else if(fiv > 1)
        {
          fiv-= 2; 
        }
        else
        {
          flag = 1;
          break;
        }  
      }
	   }
	   if(flag==1) cout<<"NO"<<endl;
	   else cout<<"YES"<<endl;
	   
	 }
	
}
