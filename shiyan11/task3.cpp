#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // ���벢�洢һ���ַ����������ַ����е�ÿ����ĸ��10���ٽ��ַ��������
    string s;
    cout << "������һ���ַ�����" << endl;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        // cout << s[i] << " ";
        s[i] += 10;
        // cout << (int)s[i] << endl;
        // if (s[i] < 0 || s[i] > 127)
        // {
        //     s[i] = '?';
        // }
    }

    cout << "ת������ַ���Ϊ��" << endl;
    cout << s << endl;

    system("pause");
    return 0;
}
