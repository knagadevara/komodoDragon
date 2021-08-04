#include "../include/deep-copy.h"
#include <iostream>
using std::cout;
using std::endl;

void display_Deep(DeepCopy SC)
    {
        cout << "Breadth: " << SC.get_breadth_value() << endl
             << "Length: "  << SC.get_length_value()  << endl
             << "Area: "   <<  SC.get_area() << endl ;
    }

int main(void)
    {
        DeepCopy obj1 {10 , 20 };
        display_Deep(obj1);

        DeepCopy obj2 {obj1};
        obj2.set_breadth_value(30);
        cout << "Obj2 Breath: "  << 
        obj2.get_breadth_value() << endl;
        cout << "Obj1 Breath: " << 
        obj1.get_breadth_value() << endl;

        return 0;
    }