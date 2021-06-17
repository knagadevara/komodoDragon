#include <iostream>
using namespace std;

struct ShapeOfObject
{
    int16_t length;
    int16_t breadth;
};

int main(void)
    {
        ShapeOfObject rectangle {10 , 7} ;
        
        ShapeOfObject SepterAngle;
        SepterAngle.breadth = 20 ;
        SepterAngle.length = 45 ;
        ShapeOfObject* pointerToSepterAngle = &SepterAngle ;

        ShapeOfObject* pointerToSepterHeap = (ShapeOfObject*) calloc (1 , sizeof(ShapeOfObject)) ; // Creating a Structure variable in Heap.
        pointerToSepterHeap->length = 32 ;
        pointerToSepterHeap->breadth = 15 ;

        cout << "Direct Reference" << endl
             << "Length[rectangle.length]: " << rectangle.length << endl
             << "Breadth[rectangle.breadth]: " << rectangle.breadth << endl;
        cout << "InDirect Reference" << endl
             << "Length[(*pointerToSepterAngle).length]: " << (*pointerToSepterAngle).length << endl
             << "Breadth[pointerToSepterAngle->breadth]: " << pointerToSepterAngle->breadth << endl;
             // As '.' takes precedence over '*' it will go inside paranthesis while accessing the objects in Structure.
             // So it is a good practice to use the alternative syntax. 
        cout << "InDirect Reference accessing Heap Variable " << endl
             << "Length[(*pointerToSepterHeap).length]: " << (*pointerToSepterHeap).length << endl
             << "Breadth[pointerToSepterHeap->breadth]: " << pointerToSepterHeap->breadth << endl;
        free(pointerToSepterHeap);
        return 0;
    }