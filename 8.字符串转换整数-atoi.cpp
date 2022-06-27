/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s)
    {
        const unsigned int MAX = 2147483648;
        int i = 0;
        bool isEegative = false;
        long ans = 0;
        // 跳过前导空格
        while (s[i] == ' ')
        {
            i++;
        }
        // 检查符号
        if (s[i] == '-')
        {
            isEegative = true;
            i++;
        }
        else if (s[i] == '+')
        {
            i++;
        }
        // 读取数字
        while (s[i] >= '0' && s[i] <= '9' && ans <= MAX)
        {
            ans = ans * 10 + s[i] - '0';
            i++;
        }
        // 处理整数范围
        if (isEegative)
        {
            return -1 * (ans > INT32_MAX ? MAX : ans);
        }
        else
        {
            return (ans > INT32_MAX ? INT32_MAX : ans);
        }
    }
};
// @lc code=end
