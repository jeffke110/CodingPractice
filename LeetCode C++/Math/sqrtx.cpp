#include <iostream>



class Solution {
public:
    int mySqrt(int x) {
        int64_t i = 0;
        int64_t i_squared = 0;

        while (i_squared < x) {
            i++;
            i_squared = i * i;
        }
        if (i_squared > x) {
            i--;
        }
        return i;
    }
};