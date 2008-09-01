
#include <iostream>

using namespace std;

int main()
{
  char string[256];                               // A nice long string

  cout<<"Please enter a long string: ";
  cin.getline ( string, 256, '\n' );              // Input goes into string
//so basic string format is cin.getline ( stringname, length, '\n' )
  cout<<"Your long string was: "<< string <<endl;
  cin.get();
}