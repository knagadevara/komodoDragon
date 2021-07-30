#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
	int fav_num;
	cout << "Enter a desired Number between 1 to 100: ";
	cin >> fav_num;
	if ( fav_num == 24 ) {
		cout << "Amazing!" << endl	;
	}
		cout << "No Really!! " << fav_num << " is my favorite number " << endl;
	return 0;
}
