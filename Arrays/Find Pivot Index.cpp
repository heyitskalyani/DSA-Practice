#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int total = 0;
        
        // Find total sum of array
        for(int i = 0; i < nums.size(); i++) {
            total += nums[i];
        }

        int leftSum = 0;

        // Check pivot index
        for(int i = 0; i < nums.size(); i++) {

            int rightSum = total - leftSum - nums[i];

            if(leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};