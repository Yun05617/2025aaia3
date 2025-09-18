///week02-5.cpp LeetCode 學習計畫 第2題
///389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};///陣列宣告，ASCII: 0-255 預設值0
        for(int i=0; i<s.length();i++){
            char c = s[i];//找到第i個字母
            A[c]++;//分類、放進對應的字母桶子裡
        }
        for(int i=0; i<t.length();i++){
            char c = t[i];//找到第i個字母
            A[c]--;//從桶子裡,拿出字母
            if(A[c] < 0)return c;//字母不夠用，就是他!
        }
            return 0;
    }
};
