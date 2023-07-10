#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    static void sortColors(std::vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                std::swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                std::swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main()
{
    std::vector<int> nums = { 2,0,2,1,1,0 };
    Solution::sortColors(nums);
    for (int i : nums) {
        std::cout << i << " ";
    }
}
