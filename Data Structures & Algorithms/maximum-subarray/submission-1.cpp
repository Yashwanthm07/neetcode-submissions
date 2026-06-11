class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int curMax = 0, maxTillnow = INT_MIN;
       for(auto c : nums) {
           curMax = max(c, curMax + c);
           maxTillnow = max(curMax, maxTillnow);
       }
       return maxTillnow;
    }
};
