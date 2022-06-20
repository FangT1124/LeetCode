/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows < 2)
            return s;                // 给定行数为 1 时结果与原字符串一样
        vector<string> res(numRows); // 创建 res 保存每行结果
        int i = 0;                   // 行数标志
        int flag = -1;               // 往上走还是往下走的标志
        for (char &ch : s)
        { // 遍历 s
            res[i] += ch;
            if (i == 0 || i == numRows - 1)
            { // 行首行尾变向
                flag = -flag;
            }
            i += flag;
        }
        for (int i = 1; i < numRows; i++)
        { // 将每行接起来就是结果
            res[0] += res[i];
        }
        return res[0];
    }
};
// @lc code=end
