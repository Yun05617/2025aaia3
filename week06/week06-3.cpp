// week06-3.cpp
// LeetCode �ǲ߭p�e simulation �����Ĥ@�D682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for (string op : operations) { // c++�i���j��
            // cout << op << "\n";//�ոլ�,�|�L�X�ƻ�F��
            if (op[0] == '+') {            // �⥽��Ƭۥ[,�b��^�h
                int temp = a.back();       // ���O�U�̫�1��
                a.pop_back() ;            // �ȮɦR����
                int temp2 = a.back();  // �A�O�U�̫��2��
                a.push_back(temp);         // ����̫�1���A��^�h
                a.push_back(temp + temp2); // ��Ƭۥ[,�A��i�h
            } else if (op[0] == 'D') {     // �ƻs�̫�1��u�ADouble��2���v
                a.push_back(a.back()*2);
            } else if (op[0] == 'C') { // �R���̫�1��
                a.pop_back();
            } else { // ��stoi(op)���,��^�h
                a.push_back(stoi(op));
            }
        }
        /// �̫�,��for�j��,��}�Ca����,�����[�_��
        int ans = 0;
        for (int now : a) {///c++�i���j��,�]�i�H�� for(int i=0)
            ans += now;
        }
        return ans;///���H�K return 0 ���@�U�A��
    }
};
