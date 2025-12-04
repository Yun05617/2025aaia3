//week13-2a.cpp 學習計畫linked List 第1題
// 21.Merge Two Sorted Lists 左邊list1 右邊list2合起來
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //練習寫看看「資料結構」怎麼寫程式
        ListNode* ans = new ListNode(999);//故意亂寫999
        ListNode* ans2 = new ListNode(888);//故意亂寫888
        ans->next = ans2;//把它們接起來
        //先寫4行,熟悉一下資料結構「怎麼new」
        return ans;
    }
};
