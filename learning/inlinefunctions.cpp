 
#include <iostream>

using namespace std;
// note using inline functions replaces the function call with the code comprising the function ( enlarges programs)
inline void hello()
{ 
  cout<<"hello";
}
int main()
{
  hello(); //Call it like a normal function...
  cin.get();
}