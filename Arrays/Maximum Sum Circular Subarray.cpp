#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int totalSum = 0;

        int currentMax = 0;
        int maxSum = nums[0];

        int currentMin = 0;
        int minSum = nums[0];

        for(int i = 0; i < nums.size(); i++) {

            totalSum += nums[i];

            // Maximum subarray sum
            currentMax = max(nums[i], currentMax + nums[i]);
            maxSum = max(maxSum, currentMax);

            // Minimum subarray sum
            currentMin = min(nums[i], currentMin + nums[i]);
            minSum = min(minSum, currentMin);
        }

        // If all elements are negative
        if(maxSum < 0) {
            return maxSum;
        }

        return max(maxSum, totalSum - minSum);
    }
};