#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;


void preIncrement()

    {
    int counter {10}; 
    int result {0}; // declaring and initializing the values of result to '0'
          
    cout << "Pre-Increment" << endl
         << "Values Before Increment" << endl
         << "Counter: " << counter << endl
         << "Result: " << result << endl
         << "Pre-Incrementing counter: result = ++counter" << endl ; 
    result = ++counter;
    cout << "Values After Increment" << endl
         << "Counter: " << counter << endl
         << "Result: " << result << endl << endl ;
    result = ++counter + 10 ;
    cout << "Running: result = ++counter + 10" << endl
         << "Counter: " << counter << endl
         << "Result: " << result << endl << endl ;

        }

void postIncrement()

    {
    int counter {10}; 
    int result {0}; // declaring and initializing the values of result to '0'

    cout << "Post-Increment" << endl
         << "Values Before Increment" << endl
         << "Counter: " << counter << endl
         << "Result: " << result << endl
         << "Post-Incrementing counter: result = counter++" << endl ; 
    result = counter++;
    cout << "Values After Increment" << endl
         << "Counter: " << counter << endl
         << "Result: " << result << endl << endl;
    result = counter++ + 10 ;
    cout << "Running: result = counter++ + 10" << endl
         << "Counter: " << counter << endl
         << "Result: " << result << endl << endl ;



    }


void drawtriangle()
    {

        for (int8_t i = 0; i <= 5 ; i++)
        {
            cout << endl;
            for (int8_t j = 0; j < i; j++)
            {
                cout << "*" ;
            }
            
        }
    }

int main()

    {

        preIncrement()  ;
        postIncrement() ;
        
        return 0;
    }

    // In Pre-increment(++counter) the variable is incremented before it is assigned.
    // result = ++counter
        // which means result = counter + 1;
    // In Post-increment(counter++) the variable is incremented after assigning counter to result.
    // result = counter++
        // means result = counter;
        // counter = counter + 1 ;