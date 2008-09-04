#include <iostream>

using namespace std; // So we can see cout and endl
int pascal(int);
int main()
{ 
  int x = 0;  // Don't forget to declare variables
  int y = 0;
  int n = 2;
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
  }	pascal(n);

}




//    This function returns the factorial of a number, e.g.
//    Factorial of 4 = 4 * 3 * 2 * 1 = 24

long int Factorial(long int number)
{
	if(number == 1 || number == 0) return 1;

	long int factorial = number;
	while(--number > 1)
		factorial *= number;
  
	return factorial;
}

//  Combination finds the combination of a pair of numbers,
//  n and r, i.e nCr, which is :
//  n!
//  __
//  r!(n-r)!
long int Combination(long int n, long int r)
{
    return Factorial(n) / (Factorial(r) * Factorial(n-r));
}

//	ShowNumber will print the number and the correct amount
//	of spaces, by working out how many digits there are in the number.
void ShowNumber(long int number)
{
	long int digits = 1;
	long int e;
	//for(float e = 10; e <= 30000; e *= 10)
	//{
	//	if((float)(number / e) > 0) digits++;
	//	else break;
	//}

	cout << number;
	for(e=0; e < (4-digits); e++)
		cout << " ";
}



int pascal (int n)
{
     

	//   Get the height.
	int height = 1;
	
	int line = n;
	
	 
	//  Go through each line....
	//	for(int t=0;  t < ((height-n)); t++)
			cout << "   ";
	  
		//  ...and print out every number.
		for(int b=0; b < line; b++)
			ShowNumber(Combination(line, b));
		cout << "1\n";
	}

	


