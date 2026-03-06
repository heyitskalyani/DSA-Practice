#include <vector>
#include <algorithm>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int left =0,temp;
        for(int right =0;right<n;right++)
        {
            if (nums[right]!=0)
            {
                temp = nums[right];
                nums[right] = nums[left];
                nums[left] = temp;
                left ++;
            }
        }
        
    }
};
