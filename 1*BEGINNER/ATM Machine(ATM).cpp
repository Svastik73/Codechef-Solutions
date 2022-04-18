#include <bits/stdc++.h>
    using namespace std;

    int main() {
        
        int t;
        cin>>t;
        while(t--){
            int n;
            long int k;
            cin>>n;
            cin>>k;
            long int value;
            for(int i=0;i<n;i++){
                cin>>value;
                if(k-value>=0){
                    k=k-value;
                    cout<<'1';}
                else
                    cout<<'0';
            }

        cout<<endl;
        }
    }
