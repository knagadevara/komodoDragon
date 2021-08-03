#include "shallow-copy.hpp"

int main(void)
    {
        ShallowCopy obj1 {100};
        display_shallow(obj1);

        ShallowCopy obj2 {obj1};
        obj2.set_data_value(999);
        return 0;
    }