#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

// Vectors over Arrays

int main()
	{
		//declaring an empty vector with no values but later assigning with push_back() method.
		vector <char> alphabetVowels;
		alphabetVowels.push_back('A');
		alphabetVowels.push_back('E');
		alphabetVowels.push_back('I');
		alphabetVowels.push_back('O');
		alphabetVowels.push_back('U');
		
		cout << "Size of the Vector alphabetVowels: "
				<< alphabetVowels.size()
				<< endl
				<< alphabetVowels.at(alphabetVowels.size() - 1)
				<< endl ;
		
		// decaring and initializing vaector of type int and size 10 with 1 as their default value.
		vector <int> ageGroup (10 , 1) ;
		
		// accessing the values in vectors array using at and [i]
		cout << "Shows the value at index 4: " 
				<<  ageGroup.at(4)
				<< endl;
		// using push_back() to add value at the end of the vector
		ageGroup.push_back(20);
		cout << ageGroup[9]
				<< endl
				<< "Present Size of the Vector object ageGroup is: "
				<< ageGroup.size()
				<< endl ;
		cout << "Enter 3 ageGroup values with spaces: " ;

		cin 	>> ageGroup.at(0)
				>> ageGroup.at(1)
				>> ageGroup.at(2);
				
		cout << "Changed Values are: "
				<< endl
				<< ageGroup.at(0)
				<< endl
				<< ageGroup.at(1)
				<< endl
				<< ageGroup.at(2)
				<< endl;

// Creating a 2-D vector

	vector <vector <int>> movie_rating;
	
	movie_rating = {{ 1,2,3,4} , {5,6,7,8} , {9 , 0 , 1, 2}};
	
	cout << "Movie Rating" << endl
			<< movie_rating.at(0).at(0) << endl
			<< movie_rating.at(0).at(1) << endl
			<< movie_rating.at(0).at(2) << endl
			<< movie_rating.at(0).at(3) << endl;
			
		return 0;
	}