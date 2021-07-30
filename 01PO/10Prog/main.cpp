#include <iostream>
#include <vector>
#include <iomanip>

using std::fixed;
using std::setprecision;
using std::vector;
using std::cout;
using std::cin;
using std::endl;


// Infinite Loop
// for(;;)
//while(True)

void printTables(int tillWhen)
    {
        for( int i = 1 ; i <= tillWhen ; i++)
        {
            cout << "Table: " << i << endl;  
            for (int j = 1; j <= 10; j++)
            {
                cout << i << " i*j " << j << " = " << (i*j) << endl;
            } cout << "\n-----------------\n" << endl;
        }    
    }

int main()
    {   
        vector<uint16_t> nums{};
        int8_t size {0} ;
        double total {} ;
        uint16_t tillWhen ;
        // vector<float> temperature{ 89.12 , 81.45 , 85.90 , 76.55 , 87.34 };
        // cout << tillWhen << endl; // initialized as 0

        do{     
                cout << "Enter a number between 10 - 100: " ;
                cin >> tillWhen;
          } while (not ( tillWhen >= 10 && tillWhen <= 100)) ;
          //  << ((tillWhen < 10 || tillWhen > 100 ) ? "[ Out of Range ]:": "" );
          // Input validation to get a number between 10 - 100
          // will run until the expression is True and negated as false by not
          // So it can be summarized as while(not(False))
        printTables(tillWhen) ;
        for (uint16_t i = 1; i <= tillWhen; i++)
                nums.push_back(i*3);
        
        cout << endl;

        long unsigned int wi {0} ; 
        while ( wi <= nums.size())
        {
            cout << nums[wi] << " " << ((nums[wi]%2==0) ? "EVEN":"ODD")
                 << ((nums[wi]%10 == 0) ? "\n":" ") ;
            wi++;
        }
        

        for ( auto temp: { 89.12 , 81.45 , 85.90 , 76.55 , 87.34 }) 
        //looping through sequences. the data type will be determined by "auto"
        // Similar to foreach item in the sequence
            {
                total += temp;
                ++size;
            }

        cout << "Average Temperature: "
             << fixed << setprecision(1) 
             << ((total!=0) ? total/size:total) << endl ;

        return 0;
    
    }