// week03-2a.cpp ,璶糶2Ω(糶Ч,秨み,虏虫,礛碞.......)
//LeetCode 厩策璸礶材8肈 1822. sign of the Product of an Array
//р皚癬ㄓ, 琌タ计,璽计,临琌 0

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;//0ヴ计常琌0,Τ1程,ぐ或跑ぐ或
        for(int i=0;i<nums.size();i++){//Τ碭计,癹伴禲碭Ω
            ans *=nums[i];//–Ωр nums[i]秈ans柑
        }// 计禫禫,1000计,,碞脄,┮祘Α岿,股股股
    if(ans>0)return 1;
    if(ans<0)return -1;
    return 0;
    }
};
