///week05-3b.cpp Part1:Input,Part2:Output
///Part3: stringstream Part4: reverse�ϹL��
///CPE �ĤG�D UVA 483 �˹L��
#include <iostream>
#include <sstream>/// Part 3: stringstream ���ɮ׬Ostream
#include <algorithm>///Part 4: reverse ���t��k
using namespace std;
int main()
{
    string line;///�@��r���r�� Part 1: Input
    while (getline(cin, line)){///Ū�i��
        stringstream ss(line);///Part 3: ��stringstream�_�r
        string word;///�r��o��
        while( ss >> word ){///Part3:��ss�_�r
            cout << "Ū��F " << word << endl;///Part3
        }
        cout << line << endl; ///Part 2:Output
    }
}
