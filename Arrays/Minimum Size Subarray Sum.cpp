#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int left = 0;
        int sum = 0;
        int minLength = INT_MAX;

        for(int right = 0; right < nums.size(); right++) {

            sum += nums[right];

            // Shrink window while sum is enough
            while(sum >= target) {

                minLength = min(minLength, right - left + 1);

                sum -= nums[left];
                left++;
            }
        }

        if(minLength == INT_MAX) {
            return 0;
        }

        return minLength;
    }
};