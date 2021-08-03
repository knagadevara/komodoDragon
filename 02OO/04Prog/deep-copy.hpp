#include <iostream>
using namespace std;

class DeepCopy
{
private:
    int* data;
public:
    DeepCopy(int d);
    DeepCopy(const DeepCopy &source);
    void set_data_value(int d);
    int get_data_value();
    ~DeepCopy();
};

DeepCopy::DeepCopy(int d)
    {
        this->data = new int;
        *this->data = d; 
    }

DeepCopy::DeepCopy(const DeepCopy &source)
    // : DeepCopy{*source.data}
    // or
    {
        this->data = new int;
        *this->data = *source.data;
        cout << "Copy constructor" << endl;
    }

DeepCopy::~DeepCopy()
    {
        delete this->data;
        cout << "distructor Freed Data!" << endl;
    }

void DeepCopy::set_data_value(int d)
    {
        *this->data = d;
    }

int DeepCopy::get_data_value()
    {
        return *this->data;
    }    

void display_Deep(DeepCopy SC)
    {
        SC.get_data_value();
    }
