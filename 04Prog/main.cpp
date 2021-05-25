#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	
	unsigned short servicibleSmallRooms {0} ;
	unsigned short servicibleLargeRooms {0} ;
	const float serviceSmallCharge {25.0} ;
	const float serviceLargeCharge {35.0} ;
	const float serviceTax {0.06};
	
	cout << "\t\tWelcome to Mr. Kleaner Co." << endl
			<<"======================================================" << endl
			<< "Service Charge per Small Room:\t"<< serviceSmallCharge  << endl 
			<< "Service Charge per Large Room:\t"<< serviceLargeCharge  << endl
			<< "Incurable Service TAX per Room:\t" << serviceTax << endl;
	
	cout << endl 
			<< "======================================================" << endl
			<< "Please enter the number of Small Rooms that are to be serviced: ";
	cin   >> servicibleSmallRooms ;
	cout << "Please enter the number of Large Rooms that are to be serviced: ";
	cin   >> servicibleLargeRooms ;
	
	cout << "No of rooms to be small serviced is: " 
			<< servicibleSmallRooms << endl
	        << "No of rooms to be large serviced is: " 
			<< servicibleLargeRooms << endl
			<< "Please find the below Cost Estimate" << endl ;
	
	float smallRoomServiceCost =  servicibleSmallRooms  * serviceSmallCharge ;
	float largeRoomServiceCost =  servicibleLargeRooms  * serviceLargeCharge ;
	double costBeforeTax = smallRoomServiceCost + largeRoomServiceCost ;
	float incuredTax = costBeforeTax * serviceTax ; 
	
	cout << endl 
			<< "======================================================" 
			<< endl
			<< "Cumilative Room Service Cost for "
			<< servicibleSmallRooms + servicibleLargeRooms  
			<< " Rooms: "
			<< costBeforeTax 
			<< endl
			<< "Tax incured on the Service: " 
			<< incuredTax 
			<< endl ;
	
	cout <<"======================================================" 
			<< endl
			<< "Total Estimated Amount: " 
			<< costBeforeTax + incuredTax 
			<< endl 
			<< "This Estimate is valid only till the next 30 Days" 
			<< endl ;
	
	return 0;
	}