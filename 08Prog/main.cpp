#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
    {
        const int count {3} ;
        int num1 {} , num2{} , num3{} , total {0} ;
        double avg {0.0} ;
        cout << "Enter 3 integers sepetated by spaces: "; 
        cin >> num1 >> num2 >> num3 ;
        total = num1+num2+num3 ;
        avg = static_cast<double>(total)/count ; // typecasting total to double so that count will get promoted from lower to higher to control loss of data after decimal.

        cout << "Total: " << total << endl
             << "avg: " << avg << endl;

        if ((avg > 39.00) and (avg <= 49.00))
            { printf("\n\tPassed!\n");}        
        else if ((avg >= 50.00) and (avg <= 69.00))
            { printf("\n\tMerit-3!\n") ;}
        else if ((avg > 69.00) and (avg <= 79.00))
            { printf("\n\tMerit-2!\n");}
        else if ((avg > 79.00) and (avg <= 89.00))
            { printf("\n\tMerit-1!\n"); }
        else if ((avg > 89.00) and (avg <= 99.00))
            { printf("\n\tDistinction!\n"); }            
        else
            printf("\n\tFAILED!\n");

        return 0;
    }