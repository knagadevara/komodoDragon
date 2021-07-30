#include <iostream>

using namespace std;

int** returnIntPointerArray(int ArraySize)
    {
        return new int*[ArraySize];
    } // C++ way of allocating space in Heap with 'new', returns an array of integer pointers

int* returnIntegerArray(int ArraySize)
    {
        return new int[ArraySize];
    } // C++ way of allocating space in Heap with 'new'

void FreeSpace(int** ArrayAddress , int size)
    { 
        if(size==0)
            delete ArrayAddress;
        for (int i = 0; i < size; i++)
            delete ArrayAddress[i];
    }

int main(void)
        {   
            int** myArray; // creating a variable in Stack which points to an pointer.
            myArray = returnIntPointerArray(3) ; // Creating an Array of pointers of type integer in Heap of size 3.
            // Creating an Arrays in Heap and assigning the first address to the pointer variable[index].
            myArray[0] = returnIntegerArray(4);
            myArray[1] = returnIntegerArray(4);
            myArray[2] = returnIntegerArray(4);
            FreeSpace(myArray , 3);
            return 0;
        }