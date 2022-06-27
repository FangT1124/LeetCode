/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
#include <iostream>
/*
    1032/1032 cases passed (4 ms)
    Your runtime beats 42.12 % of cpp submissions
    Your memory usage beats 94.94 % of cpp submissions (5.7 MB)
*/

#include <string>
#include <math.h>

using namespace std;

class Solution
{
public:
    // int reverse(int x)
    // {
    //     string s = to_string(x);          //变成字符串
    //     std::reverse(s.begin(), s.end()); //翻转字符串
    //     int ans = 0;
    //     try
    //     {
    //         ans = stoi(s); //变回数字
    //         if (x < 0)
    //             ans = -ans; // x是负数，加上负号
    //     }
    //     catch (exception ex)
    //     {
    //     } //溢出，啥也不做，返回零
    //     return ans;
    // }
    int reverse(int x)
    {
        if (x == 2147483648 || x == -2147483648)
            return 0;
        int num = abs(x);
        string s = to_string(num);
    `
        std::reverse(s.begin(), s.end());
        if (s.size() >= 10 && strcmp(s.c_str(), "2147483648") > 0)
        {
            cout << "success: " << s.c_str() << endl;
            return 0;
        }

        if (x < 0)
            return 0 - atoi(s.c_str());
        return atoi(s.c_str());
    }
};
// @lc code=end
