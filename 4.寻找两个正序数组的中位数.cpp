/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> vec3;
        int flag = nums1.size()+nums2.size();
        vec3.resize(flag);
        // 按序合并数组，merge函数使用的必要条件：必须为两个有序数组
		merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),vec3.begin());

        if (flag%2 == 0)
        {
            return double(vec3[flag/2] + vec3[flag/2 - 1])/2;
        }else if (flag%2 == 1)
        {   
            return double(vec3[flag/2]);
        }else
        {
            return 0;
        }
    }
};
// @lc code=end
