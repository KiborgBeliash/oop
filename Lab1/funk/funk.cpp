    #include "../include/funk.h"

int calculation(int divider, int bound) {
    int result;
    
    result = bound - (bound % divider);

    if (result > 0)
        return result;
    else
        return false;
}