//week06-4.cpp
//LeetCode學習計畫simulation模擬,第2題 657.Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x= 0, y=0;
        for(char c : moves){//C++進階迴圈
            if(c=='U'){//往上
                y++;
            }else if(c=='D'){//往下
                y--;
            }else if(c=='L'){//往左
                x--;
            }else if(c=='R'){//往右
                x++;
            }
        }//最後有沒有留在原點?
        if(x==0 && y==0)return true;
        else return false;
    }
};
