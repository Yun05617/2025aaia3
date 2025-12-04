//week13-3.cpp 學習計畫 Linked list 第3題
//LeetCode 2.Add Two Numbers 直式加法、逐位相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr){
            int now = carry;
            if(l1 != nullptr){
                now += l1-> val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                now += l2->val;
                l2 = l2->next;
            }
            ans2->next = new ListNode( now %10);//個位數,準備一個Node
            ans2 = ans2->next;//換下一筆
            carry = now /10;
        }
        if(carry>0)ans2->next =  new ListNode(carry);//還有近位?加1位
        return ans->next;
    }
};
