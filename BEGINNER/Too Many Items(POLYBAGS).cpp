#include <iostream>
using namespace std;

int main() {
    int n,i=0;
    cin>>n;
    while(i<n)
    {
        int N;
        cin>>N;
        if(N%10 == 0)
        cout<<N/10<<endl;
        else
        cout<<N/10 + 1<<endl;
        i+=1;
    }
}
