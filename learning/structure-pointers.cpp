 
#include <iostream>

using namespace std;

int main()
{
  int x;
  int y;
  int array[8][8]; // Declares an array like a chessboard
  /* to access 2d arrays, arrayname[arrayindexnumber1][arrayindexnumber2] = whatever; 
to access 1d arrays, use arrayname[arrayindexnumber] = whatever; */
  for ( x = 0; x < 8; x++ ) {
    for ( y = 0; y < 8; y++ )
      array[x][y] = x * y; // Set each element to a value
  }
  cout<<"Array Indices:\n";
  for ( x = 0; x < 8;x++ ) {
    for ( y = 0; y < 8; y++ )
      cout<<"["<<x<<"]["<<y<<"]="<< array[x][y] <<" ";
    cout<<"\n";
  }
  cin.get();
}

