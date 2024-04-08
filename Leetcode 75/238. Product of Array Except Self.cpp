/* 238. Product of Array Except Self
    Input: nums = [1,2,3,4]
    Output: [24,12,8,6]
    Explanation: [2*3*4,1*3*4,1*2*4,1*2*3]
*/
//O(n), O(n)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n), right(n), res(n);
        left[0]=1;
        right[n-1]=1;
        for(int i=1; i<n; i++) {
            left[i] = nums[i-1]*left[i-1];
        }
        for(int i=n-2; i>=0; i--) {
            right[i] = nums[i+1]*right[i+1];
        }
        for(int i=0; i<n; i++) {
            res[i] = left[i]*right[i];
        }
        return res;
    }
};