#include <iostream>
#include <string>
#include <vector>


class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9 && i != 0) {
                digits[i] = 0;
            }
            else if (digits[i] == 9 && i == 0) {
                digits[i] = 0;
                digits.insert(digits.begin(), 1);
                return digits;
            }
            else {
                digits[i]++;
                return digits;
            }
        }
        return digits;
    }
};
