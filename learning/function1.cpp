 
#include <iostream>

using namespace std;

int mult ( int x, int y );

int main()
{
  int x;
  int y;
  
  cout<<"Please input two numbers to be multiplied: ";
  cin>> x >> y;
  cin.ignore();
  cout<<"The product of your two numbers is "<< mult ( x, y ) <<"\n";
  cin.get();
}

int mult ( int x, int y )
{
  return x * y;
}