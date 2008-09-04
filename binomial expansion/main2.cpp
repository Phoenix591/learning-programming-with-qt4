#include <iostream>
#include "BigIntegerLibrary.hh"

using namespace std; // So we can see cout and endl
int pascal();
int n;
int main()
{ 
  int x = 0;  // Don't forget to declare variables
  int y = 0;
  int v = 0;
  cout << "Please enter an exponant : ";
  cin >> n;
  cout << "Variable or numbers?(1 or 2 )";
  cin >> v;
 x = n;
if ( v != n ) {
  while ( x > -1 ) { // While x is l²ess than 10 
    cout<< " X^" << x << "Y^" << y ;
    x--; 
	y++;     // Update x so the condition can be met eventually
  } cout << "\nThe Coefficiants are : ";
  }	pascal();

}
int pascal()
{

int line,c,x;
void pasc(BigInteger);

//printf("\n\nEnter the no. of rows: ");
//scanf("%d",&line);
 line = 1;
//printf("\n\n\n");
//printf("\nPascal's triangle :\n");

for(x=line-1;x>=0;x--)
            printf("   ");
cout <<"  1\n\n";

//for(n=2;n<=line;n++)
//{
 //     for(c=line-n;c>=1;c--)
   //         printf("   ");
 pasc(n);
 cout <<"\n";
}


//}


void pasc(BigInteger n)
{
      BigInteger r;
 long fact(BigInteger);
            for(r=0;r<=n;r++)
                  printf("%3ld   ",fact(n)/(fact(n-r)*fact(r)));
}
 
long fact(int v)
{
  if(v==1||v==0)
        return(1);
  else
        return(v*fact(v-1));
}