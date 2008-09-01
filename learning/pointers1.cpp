#include <iostream>

using namespace std;

int main()
{ 
  int x;            // A normal integer
  int *p;           // A pointer to an integer
  p = &x;           // Read it, "assign the address of x to p"
  cout<< " Please assign a value for p to point to\n";
  cin>> x;          // Put a value in x, we could also use *p here
  cin.ignore();
  cout<<" P returns "  <<*p <<"\n"; // Note the use of the * to get the value
  cin.get();
}

