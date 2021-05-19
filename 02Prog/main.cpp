#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
	
	int num1, num2, num3, num4;
	double num5 ;

// Method 1	
	cout << "Enter First number: " ;
	cin >> num1;
	cout << "Enter Second number: " ;
	cin >> num2 ;
	cout << "Number1: " << num1 << endl << "Number2: " << num2 << endl ;

// Method 2 is preferable as both the numbers of same type.
	cout << "Enter two integers seperated by a space: " ;
	cin >> num3 >> num4 ;
	cout << "Number3: " << num3 << endl << "Number4: " << num4 << endl ;
	
// It is not recommended to store a double in the same buffer immediately after the integer.

	cout << "Enter the floating point  value: " ;
	cin >> num5 ;
	cout << "Entered floating point number is: " << num5 ;
	
	return 0;
	}