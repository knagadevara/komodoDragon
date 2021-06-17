#include <iostream>
using namespace std;

int* returnArray(int ArraySize)
        {
            int* HeapArray = (int*)calloc(ArraySize , sizeof(int));
            return HeapArray;
        }
int main(void)
        {
            int* myArray = returnArray(5);
            return 0;
        }