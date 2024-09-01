#include <iostream>
#include <vector>

class Solution
{
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        int index_1 = m - 1; //index for nums 1
        int index_2 = n - 1; // index for nums 2
        int sumSize = m + n - 1;

        while( index_1 >= 0 && index_2 >= 0){
            if(nums1[index_1] > nums2[index_2]){
                nums1[sumSize--] = nums1[index_1--];
            }else{
                nums1[sumSize--] = nums2[index_2--];
            }
        }
        while(index_2 >= 0){
            nums1[sumSize--] = nums2[index_2--];
        }

    }
};