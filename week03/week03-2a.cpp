// week03-2a.cpp �G�X�@,�n�g2��(�g��,�ܶ}��,��²��,�M��N.......)
//LeetCode �ǲ߭p�e��8�D 1822. sign of the Product of an Array
//��}�C���_��, �ݬO����,�t��,�٬O 0

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;//�]��0������Ƴ��O0,�u��1�̨�,�������ܤ���
        for(int i=0;i<nums.size();i++){//�ݦ��X�ӼƦr,�j��]�X��
            ans *=nums[i];//�C���� nums[i]���ians��
        }// �Ʀr�V���V�j,1000�ӼƦr,����@�b,�N�z���F,�ҥH�{�����F,�ɹɹ�
    if(ans>0)return 1;
    if(ans<0)return -1;
    return 0;
    }
};
