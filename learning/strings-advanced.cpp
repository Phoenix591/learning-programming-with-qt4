#include <iostream> //For cout
#include <cstring>  //For the string functions

using namespace std;

int main()
{
  char name[50];
  char lastname[50];
  char fullname[100]; // Big enough to hold both name and lastname
  
  cout<<"Please enter your name: ";
  cin.getline ( name, 50 );
  if ( strcmp ( name, "Julienne" ) == 0 ) // Equal strings
    cout<<"That's my name too.\n";
  else                                    // Not equal
    cout<<"That's not my name.\n";
  // Find the length of your name
  cout<<"Your name is "<< strlen ( name ) <<" letters long\n";
  cout<<"Enter your last name: ";
  cin.getline ( lastname, 50 );
  fullname[0] = '\0';            // strcat searches for '\0' to cat after
  strcat ( fullname, name );     // Copy name into full name
  strcat ( fullname, " " );      // We want to separate the names by a space
  strcat ( fullname, lastname ); // Copy lastname onto the end of fullname
  cout<<"Your full name is "<< fullname <<"\n";
  cin.get();
}