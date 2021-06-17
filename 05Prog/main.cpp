#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const char alphabetVowels[6] { 'a' , 'e'  , 'i' , 'o' , 'u' , '\0' } ;  // array is locked at size 5 and cannot go beyond it will throw 'array out of bound' exception. And terminate the character array with '\0'
	cout << "The First Vowel is: " << alphabetVowels[0] << endl
			<< "The Last Vowel is: " << alphabetVowels[4] << endl ;

	// If Initializing arrays with 0 value then ensure that the size of array is already given, else it might cause damage.
	unsigned int ageGroup[5] {0} ;
	cout << "Existing value at all the indexes: "
			<< endl
			<< ageGroup[0]
			<< endl
			<< ageGroup[1]
			<< endl
			<< ageGroup[2]
			<< endl			
			<< ageGroup[3]
			<< endl
			<< ageGroup[4]
			<< endl
			<< "Now, enter 5 new random values with spaces between 1 - 100 to replace 0 at all the indexes: " 
			<< endl ;
	cin >> ageGroup[0] ;
	cin >> ageGroup[1] ;
	cin >> ageGroup[2] ;
	cin >> ageGroup[3] ;
	cin >> ageGroup[4] ;
	// values can be re initialized
	cout << "Changed values at all the indexes: "
			<< endl
			<< ageGroup[0]
			<< endl
			<< ageGroup[1]
			<< endl
			<< ageGroup[2]
			<< endl			
			<< ageGroup[3]
			<< endl
			<< ageGroup[4]
			<< endl;
	
	// Compiler will set the size of the array after taking the provided values. Not recomended as prone to 'array out of bound' error if accessing the next item in the index.
	float highTemp[] { 100.0 ,  100.12 , 98.50 } ;
	cout << "Existing Temperatures: "
			<< highTemp[0]
			<< endl
			<< highTemp[1]
			<< endl
			<< highTemp[2]
			<< endl
			<< "Enter New Temprature values with spaces for next day: " ;
	cin 	>> highTemp[0] ;
	cout << "Changed value at index 0 is: " 
			<< highTemp[0] 
			<< endl ;
			
  // It is illegal to call the arrays by their names it would give out the memory address.
  
  cout << "Vowels: " << alphabetVowels
		  << endl
		  << "ageGroup: " << ageGroup
		  << endl
		  << "highTemp: "  << highTemp
		  << endl ;
}