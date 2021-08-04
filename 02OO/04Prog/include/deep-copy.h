#ifndef _DEEP_COPY_H_
#define _DEEP_COPY_H_

class DeepCopy
{
private:
    int* length;
    int* breadth;

public:
    DeepCopy(int l = 0, int b = 0);
    DeepCopy(const DeepCopy &source);
    void set_length_value(int l);
    void set_breadth_value(int b);
    int get_length_value();
    int get_breadth_value();
    int get_area();
    ~DeepCopy();
};

#endif
