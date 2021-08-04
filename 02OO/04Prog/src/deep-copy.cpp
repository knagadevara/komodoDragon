#include <iostream>
using std::cout;
using std::endl;
#include "../include/deep-copy.h"

DeepCopy::DeepCopy(int l , int b)
    {
        this->length = new int;
        *this->length = l; 
        this->breadth = new int;
        *this->breadth = b;         
    }

DeepCopy::DeepCopy(const DeepCopy &source)
     : DeepCopy{*source.length , *source.breadth}
    {
        cout << "Copy constructor" << endl;
    }

DeepCopy::~DeepCopy()
    {
        delete this->length;
        delete this->breadth;
        cout << "distructor Freed Data!" << endl;
    }

void DeepCopy::set_length_value(int l) { *this->length = l; }
void DeepCopy::set_breadth_value(int b) { *this->breadth = b; }
int DeepCopy::get_length_value() { return *this->length; }    
int DeepCopy::get_breadth_value() { return *this->breadth; }    
int DeepCopy::get_area() { return *this->length * *this->breadth; }
