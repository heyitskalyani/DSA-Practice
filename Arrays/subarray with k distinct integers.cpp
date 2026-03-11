#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int f(vector<int>& a,int k){
        unordered_map<int,int> m;
        int l=0,c=0;
        
        for(int r=0;r<a.size();r++){
            m[a[r]]++;
            
            while(m.size()>k){
                m[a[l]]--;
                if(m[a[l]]==0) m.erase(a[l]);
                l++;
            }
            
            c+=r-l+1;
        }
        
        return c;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};