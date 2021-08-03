#include "deep-copy.hpp"

int main(void)
    {
        DeepCopy obj1 {100};
        display_Deep(obj1);

        DeepCopy obj2 {obj1};
        obj2.set_data_value(999);
        return 0;
    }