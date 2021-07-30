#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
    {
        enum schoolGrade {A , B , C , D , E, F , f};
        const int count {3} ;
        int num1 {} , num2{} , num3{} , total {0} ;
        double avg {0.0} ;
        schoolGrade tagColor;
        cout << "Enter 3 integers sepetated by spaces: "; 
        cin >> num1 >> num2 >> num3 ;
        total = num1+num2+num3 ;
        avg = static_cast<double>(total)/count ; // typecasting total to double so that count will get promoted from lower to higher to control loss of data after decimal.

        cout << "Total: " << total << endl
             << "avg: " << avg << endl;

        if ((avg > 39.00) and (avg <= 49.00))
                tagColor = E ; 
        else if ((avg >= 50.00) and (avg <= 69.00))
                tagColor = D ;
        else if ((avg > 69.00) and (avg <= 79.00))
                tagColor = C ;
        else if ((avg > 79.00) and (avg <= 89.00))
                tagColor = B ;
        else if ((avg > 89.00) and (avg <= 99.00))
                tagColor = A ;
        else
                tagColor = F ;

        switch (tagColor)
        {
        case E:
            printf("\n\tPassed!\n");
            break;
        case D:
            printf("\n\tMerit-3!\n");    
            break;
        case C:
            printf("\n\tMerit-2!\n");
            break;
        case B:
            printf("\n\tMerit-1!\n");
            break;
        case A:
            printf("\n\tDistinction!\n");
            break;
        case f:
        case F:
            printf("\n\tFAILED!\n");
            break;                                                        
        default:
            printf("\n\tABSENT!\n");
            break;
        }

        num1 = (num1 > num2) ? num1: num2 ;
        num1 = (num1 > num3) ? num1: num3 ;
        // Conditional operator ?:
        // (condition) ? exp1: exp2
        // if condition is true exp1 is returned else exp2.
        cout << "What is num1: " <<( ( num1%2 == 0) ? "Even" : "Odd") << endl
             << "Highest Score: " << num1 << endl ;
        
        return 0;
    }