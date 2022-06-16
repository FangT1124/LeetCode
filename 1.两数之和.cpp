/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution
{
public:
    unordered_map<int, int> mp1;
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            //count 寻找表中是否有满足条件的元素
            if (mp1.count(target - nums[i]))
                return vector<int>{i, mp1[target - nums[i]]};
            else//如果没有就取值为value，下标为key
                mp1[nums[i]] = i;
        }
        return vector<int>();
    }
};
// @lc code=end
