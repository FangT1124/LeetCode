/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution
{
public:
    string longestPalindrome(string s)
    {
        // 排除""、"a"
        if ('\0' == s[0] || '\0' == s[1])
        {
            return s;
        }


        // 初始值设置为1可避免 "abc"、"bb" 此类特殊情况
        int len = 1, result = 1, maxselft = 0;

        for (int i = 1; i < s.size(); i++)
        {
            int left = i - 1;
            int right = i + 1;

            // 单纯陈列左右分别向mid比较可排查 "bb" 此类特殊情况
            while (left>=0 && s[left] == s[i])
            {
                left--;
                len++;
            }
            while (right<s.size() && s[right] == s[i])
            {
                right++;
                len++;
            }

            while (left >= 0 && right <= s.size() - 1 && s[left] == s[right])
            {
                left--;
                right++;
                len += 2;
            }
            if (len > result)
            {
                result = len;
                maxselft = left;
            }
            len = 1;
        }

        // substr()：截取指定起点与指定长度
        return s.substr(maxselft + 1, result);
    }
};
// @lc code=end
