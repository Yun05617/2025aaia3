/// week02-3.cpp 使用c++2011年新版的字串stoi()功能
///在codeblocks裡,必須開啟 setting-compiler...把c++11打勾勾
///SOIT106_ADVANCE_001 Using C++
#include <iostream>///cin cout //讀入資料、印出資料
#include <string>///string 字串功能
using namespace std;///使用「命名空間」標準的std
int main()
{
	string a;///宣告字串a
	cin >> a;///獨入字串a

	string ans;///宣告字串ans 放答案用的
	int N = a.length();///字串 a 的長度
	for(int i=N-1; i>=0;i--){///倒過來的迴圈
		ans+=a[i];///在迴圈裡,把a[i]塞到 ans 裡面
	}

	cout << a << '+' << stoi(ans) << '='
         << stoi(a) + stoi(ans)<<endl;
}///stoi() is "string to int" 把字串變成整數
