    #include "../include/funk.h"

int calc(int divider_value, int bound_value) {
    int result_otv;
    result_otv = bound_value - (bound_value % divider_value);
    if (result_otv > 0)
        return result_otv;
    else
        return false;
}