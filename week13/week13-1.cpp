//week13-1.cpp聖誕樹寫程式advent of Code 2025 第1天第1題
//Moodle 點擊 advantofcode.com 網址 可看到黑底，白字的題目
//在LeetCode 的 My Playground 我的遊戲場,可以寫程式
//LeetCode 幫你把#include 全部加好了,不用寫#include
//右下角 stdin 可貼上你的程式 Input
//在AdentofCode.com 登入你的GitHub 帳號後,便可看到你的專屬謎題Input
//貼到右下角 stdin 後,再執行, 看你的答案是多少(每個人不一樣)
int main() {
    char c;
    int d;
    int now = 50;
    int ans=0;
    while(cin >> c >> d){
        //if(c=='L')cout << "往左轉" << d << "格\n";
        //if(c=='R')cout << "往右轉" << d <<"格\n";
        if(c=='L') now = now - d;//減掉
        if(c=='R') now = now + d;//加上

        now = (now%100 + 100)%100;//太大的,太小的,都限制在0~99間
        cout << "現在的刻度是:" << now << "\n";
        if(now==0)ans++;//
    }
    cout << "答案是:" << ans;
}
