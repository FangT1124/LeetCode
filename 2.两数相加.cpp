/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *fang_head = new ListNode(-1);
        ListNode *fang_pre = fang_head;
        int f_t = 0;
        while (l1 != nullptr || l2 != nullptr || f_t != 0)
        {
            int l1val = l1 != nullptr ? l1->val : 0;
            int l2val = l2 != nullptr ? l2->val : 0;
            f_t = l1val + l2val + f_t;

            fang_pre->next = new ListNode(f_t % 10);
            fang_pre = fang_pre->next;
            f_t = f_t / 10;

            l1 = l1!=nullptr?l1->next:l1;
            l2 = l2!=nullptr?l2->next:l2;
        }
        fang_pre = fang_head->next;
        delete fang_head;
        return fang_pre;
    }
};
// @lc code=end
