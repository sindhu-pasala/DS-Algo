/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result;
        map<int,int> mp;
        for(int i = 0; i < nums.size(); i++) {
            if(mp.find(target-nums[i]) != mp.end()){
                result.push_back(i);
                result.push_back(mp[target-nums[i]]);
                break;
            }
            mp[nums[i]] = i;
        } 
         return result;              
    }
};
// @lc code=end

