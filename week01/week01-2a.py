#week01-2a.py �ϥ�pyhton ������1 �ϥ� for �j��
#LeetCode 28. Find the Index of the First Occurrence in a String
#�bhaystack ���_��� �̧�� needle �w(�j�����w)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #�r�ꪺ����
        N = len(needle)   #�r�ꪺ����
        for i in  range(H-N+1):  #�n�O�o+1
            # ���� slicking
            if haystack[i : i+N ] == needle: #��쪺��
                return i #���m����
        return -1 #�S�����
