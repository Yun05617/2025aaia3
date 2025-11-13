//week10-3.cpp 把「羅馬數字」算出來
//LeetCode 13. Roman to Integer
//1:I 2:II 3:III 4: IV 5:v
//6:VI 7:VII 8:VIII 9:IX 10:x
///11:XI 12:XII
//(1)要有對照表,字母對數字
//(2)正常的相加,倒裝句
//Input:"MCMXCIV"
// M:1000,(c:100,M:1000),(x:10,c:100),(I:1,V:5)
class Solution {
public:
    int helper(char c){
        if(c=='I')return 1;
        if(c=='V')return 5;
        if(c=='X')return 10;
        if(c=='L')return 50;
        if(c=='C')return 100;
        if(c=='D')return 500;
        if(c=='M')return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int total = 0,prev = 0,now=0;
        for(int i=0;i<s.length();i++){
            //錯誤的算法 total +=helper(s[i])//還沒處理「倒裝句」
            prev = now;
            now = helper(s[i]);//現在變成 舊的 prev數字
            if(prev < now)total = total - prev - prev + now;//倒裝句 前小、後大,扣兩次prev
            else total +=now;
        }
        return total;
    }
};
