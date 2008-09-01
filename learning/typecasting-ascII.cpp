#include <iostream>

using namespace std;
// outputs all 256 asc2 chars as the resault of typcasting
// typecasting is mostly useful for fractions , as a fraction is an interger devided by an interger, so without typecasting it ( like static_cast<float>(3)/5 ) you would get 0
int main()
/* the uncommented way is the C-style typecast, C++ suports the following others
int main()       
{
  cout<< char ( 65 ) <<"\n"; 
  cin.get();
}
and (both of these use 65 as the ascii charecter number (A)
int main()       
{
  cout<< static_cast<char> ( 65 ) <<"\n"; 
  cin.get();
} */
{
  for ( int x = 0; x < 256; x++ ) {
    cout<< x <<". "<< (char)x <<" "; 
    //Note the use of the int version of x to 
    // output a number and the use of (char) to 
    // typecast the x into a character  
    // which outputs the ASCII character that 
    // corresponds to the current number
  }
  cin.get();
}