/* 217. Contains Duplicate
    Input: nums = [1,2,3,1]
    Output: true
    return true if any value appears at least twice in the array, and return false if every element is distinct.
*/
// O(nlogn), O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
};