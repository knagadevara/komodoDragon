#include <iostream>
using namespace std;

class ShallowCopy
{
private:
    int* data;
public:
    ShallowCopy(int d);
    ShallowCopy(const ShallowCopy &source);
    void set_data_value(int d);
    int get_data_value();
    ~ShallowCopy();
};

ShallowCopy::ShallowCopy(int d)
    {
        this->data = new int;
        *this->data = d; 
    }

ShallowCopy::ShallowCopy(const ShallowCopy &source)
    : data{source.data}
    {
        cout << "Copy constructor" << endl;
    }

ShallowCopy::~ShallowCopy()
    {
        delete this->data;
    }

void ShallowCopy::set_data_value(int d)
    {
        *this->data = d;
    }

int ShallowCopy::get_data_value()
    {
        return *this->data;
    }    

void display_shallow(ShallowCopy SC)
    {
        SC.get_data_value();
    }
