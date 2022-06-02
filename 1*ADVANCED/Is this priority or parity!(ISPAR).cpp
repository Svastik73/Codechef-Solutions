/*
USA USA USA!!

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  
  int t;
  cin >> t;
  while(t--)
  {
    long long int n,k;
    cin >> n >> k;
    
    if(n==1)
    {
      cout << "ODD\n";
    }
    else if(k == 1)
    {
      if(n%2 != 0)
      {
        cout << "ODD\n";
      }
      else
      {
        cout << "EVEN\n" ;
      }
    }
    else if(k == 2)
    {
      cout << "ODD" << endl;
    }
    else
    {
      cout << "EVEN" << endl;
    }
  }
}
