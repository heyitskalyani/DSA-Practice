#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int n = height.size();
        int l = 0, r = n - 1;

        while(l < r) {
            int h = min(height[l], height[r]);
            int w = r - l;
            int area = h * w;

            max_area = max(area, max_area);

            if(height[l] < height[r])
                l++;
            else
                r--;
        }

        return max_area;
    }
};