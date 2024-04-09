/* 152. Maximum Product Subarray
    Input: nums = [2,3,-2,4]
    Output: 6
    Explanation: [2,3] has the largest product 6.
*/
// O(n), O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre = 1, suf = 1, prod = INT_MIN;
        for(int i=0; i<nums.size(); i++) {
            if(pre==0)
                pre=1;
            if(suf==0)
                suf=1;
            pre*=nums[i];
            suf*=nums[nums.size()-i-1];
            prod = max(prod,max(pre, suf));
        }
        return prod;
    }
};