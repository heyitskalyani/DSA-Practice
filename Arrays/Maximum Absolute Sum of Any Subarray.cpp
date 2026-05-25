#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int currentMax = 0;
        int maxSum = 0;

        int currentMin = 0;
        int minSum = 0;

        for(int i = 0; i < nums.size(); i++) {

            // Maximum subarray sum
            currentMax = max(nums[i], currentMax + nums[i]);
            maxSum = max(maxSum, currentMax);

            // Minimum subarray sum
            currentMin = min(nums[i], currentMin + nums[i]);
            minSum = min(minSum, currentMin);
        }

        return max(maxSum, abs(minSum));
    }
};