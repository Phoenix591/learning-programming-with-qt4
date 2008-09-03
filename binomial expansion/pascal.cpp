//	Pascal.cpp
//	Copyright (c) Dave Kerr 2004
//	An example of how to show pascals triangle.

#include <iostream>

using namespace std;

//    This function returns the factorial of a number, e.g.
//    Factorial of 4 = 4 * 3 * 2 * 1 = 24
int Factorial(int number)
{
	if(number == 1 || number == 0) return 1;

	int factorial = number;
	while(--number > 1)
		factorial *= number;
  
	return factorial;
}

//  Combination finds the combination of a pair of numbers,
//  n and r, i.e nCr, which is :
//  n!
//  __
//  r!(n-r)!
int Combination(int n, int r)
{
    return Factorial(n) / (Factorial(r) * Factorial(n-r));
}

//	ShowNumber will print the number and the correct amount
//	of spaces, by working out how many digits there are in the number.
void ShowNumber(int number)
{
	int digits = 1;
	int e = 10;
	for( e = 10; e <= 10000; e *= 10)
	{
		if((int)(number / e) > 0) digits++;
		else break;
	}

	cout << number;
	for(e=0; e < (6-digits); e++)
		cout << " ";
}



int main (int argc, char *argv[])
{
	cout << "Pascals Triangle\n\n";

	cout << "Enter triangle height : ";

	//   Get the height.
	int height = 0;
	cin >> height;

	//  Go through each line....
	for(int line = 0; line <= height; line++)
	{
		for(int t=0;  t < ((height-line)); t++)
			cout << "   ";
	  
		//  ...and print out every number.
		for(int n=0; n < line; n++)
			ShowNumber(Combination(line, n));
		cout << "1\n";
	}

	return 0;
}
