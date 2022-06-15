#include <iostream>
using namespace std;
int main() {
int t; cin>>t;
while(t--){
    int n; cin>>n;
    char s[n],s1[n];
    cin>>s;
    cin>>s1;
    int co=0;
    for(int i=0;i<n;i++){
        if(s[i]!=s1[i]){
            for(int k=i;k<n;k++){
                if(s1[k]==s1[i]){    /*If two index are found not to be equal, the  a inner loop check the condition and find cases where indexes are not equal, if not equal then swap the values!!    */
                    s[k]=s1[i];
                }
            }
            co++;
            
        }
    }
    cout<<co<<endl;
   }
}
