///week05-2.cpp
///���x stringstream
#include <iostream>///cin, cout, getline Ū�g���
#include <sstream>///stringstream �ݭn��
#include <string>///�ڭ̪��r�� string
using namespace std;
int main()
{
    cout << " �п�J�@�q�^��, �̭��i���Ů�: ";
    string s;///�r�� s
    getline(cin, s);///�@�rŪ�J�@���,��Js
    cout << "Ū�J�Fs�r��:"<< s << endl;

    stringstream ss(s);///�N�r��s �ܦ�ss
    string word;///�r�ꪺword
    while( ss >> word){
        cout << "���@�Ӧr: "<< word<<endl;
        }
}
