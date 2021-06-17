#include <iostream>
using namespace std;

struct ShapeOfObject
{
    int16_t length;
    int16_t breadth;
};

int areaOfRectangle(ShapeOfObject* parm)
    {
        return parm->breadth * parm->length;
    }

int changeLengthOfShape(ShapeOfObject* parm , int length)
    {
        parm->length = length;
        return 0 ;
    }

void initilizeShape(ShapeOfObject* myShape , int len, int brth)
    {
        myShape->breadth = brth ;
        myShape->length = len ;
    }

int main(void)
    {
        ShapeOfObject rectangle {10 , 7} ;
        
        ShapeOfObject SepterAngle;
        initilizeShape(&SepterAngle , 20 , 45) ;
        ShapeOfObject* pointerToSepterAngle = &SepterAngle ;

        ShapeOfObject* pointerToSepterHeap = (ShapeOfObject*) calloc (1 , sizeof(ShapeOfObject)) ; // Creating a Structure variable in Heap.
        initilizeShape(pointerToSepterHeap , 15 , 35) ;

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
        int are1 = areaOfRectangle(pointerToSepterHeap);
        cout << "area: " << are1 << endl;
        free(pointerToSepterHeap);
     
        return 0;
    }