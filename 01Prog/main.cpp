#include <iostream>

int main() {
	int fav_num;
	std::cout << "Enter a desired Number between 1 to 100: ";
	std::cin >> fav_num;
	if ( fav_num == 24 ) {
		std::cout << "Amazing!" << std::endl	;
	}
		std::cout << "No Really!! " << fav_num << " is my favorite number " << std::endl;
	return 0;
}