#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int* createArray( size_t const arraySize , int8_t initialValue = 0  )
    {
        int* newArray = new int[arraySize];
        for (size_t i = 0 ; i < arraySize ; i++)
        {
            newArray[i] = 0;
        }
        return newArray;
    }

void displayElements(const int* const dE_Array , const size_t arraySize )
    {
        for(size_t i = 0 ; i < arraySize ; i++)
        {
            cout << dE_Array[i] << endl;
        }
    }

void displayElementsEndSentinal(const int* dE_Array , int const dE_sentinal)
    {
        while(*dE_Array != dE_sentinal)
            cout << *dE_Array++ << endl ;
    }

void displayElements(const vector<int>* const dE_Vector) // making a safe display function by locking the type and contents
    {
        for (auto var : *dE_Vector)
        {
            cout << var << endl;
        }
        
    }

int main(void)

    {
        int* score_ptr {nullptr}; // creating a int pointer to null
        score_ptr = new int; // using new to allocate storage from Heap-Memory, creates one unit of memory of type int in Heap.
        delete score_ptr; // To delete the allocated memory
        cout << score_ptr << endl;
        score_ptr = nullptr;
        // create a contigues block of memory
        ssize_t vec_size{};
        cout << "Enter the size: ";
        cin >> vec_size;
        // creating contigues block of memory of type double in Heap and assigning the first memory address to double pointer variable climate_vec
        double* climate_vec = new double[vec_size];
        cout << climate_vec << endl;
        delete [] climate_vec ;// square brackets are mandatory and should contain nothing inside them. This statement will delete the allocated heap memory.
        cout << climate_vec << endl;
        climate_vec = nullptr; // points to null to avoid eratic consequences.
        cout << climate_vec << endl;
        int* my_array = createArray(5, 0);
        displayElements(my_array , 5);
        cout << my_array << endl;
        delete [] my_array;
        my_array = nullptr;
        return 0;
    }