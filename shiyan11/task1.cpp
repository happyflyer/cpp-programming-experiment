#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // ���벢�洢һ���ַ����������ַ����е�����Сд��ĸת��Ϊ��д��ĸ�������
    string s;
    // cout << "������һ���ַ�����" << endl;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] -= 32;
        }
    }

    // cout << "ת������ַ���Ϊ��" << endl;
    cout << s << endl;

    system("pause");
    return 0;
}
