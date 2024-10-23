#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
       std::string intString{ std::to_string(x) };
       std::string forward{ intString };
       std::reverse(intString.begin(), intString.end());
       return forward == intString;
    }
};