#include <iostream>
using namespace std;

int main() 
{
     int t;
     std::cin >> t;
     while(t--)
     {
          int x1,x2,y1,y2,z1,z2;
          std::cin >> x1>>x2>>y1>>y2>>z1>>z2;
          if(x2>=x1 && y2>=y1 && z2<=z1)
               std::cout << "Yes" << std::endl;
          else
               std::cout << "No" << std::endl;
     }
	
  
	return 0;
}
