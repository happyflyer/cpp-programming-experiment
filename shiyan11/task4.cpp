#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // ���벢�洢һ���ַ����������ַ����е�����Сд��ĸת��Ϊ��д��ĸ�������
    string s;
    cout << "������һ���ַ�����" << endl;
    cin >> s;
    char c;
    cout << "������һ��Ӣ����ĸ��" << endl;
    cin >> c;

    int i;

    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            break;
        }
    }

    if (i == s.length())
        cout << "���ַ���" << s << "��û����ĸ" << c << endl;
    else
        cout << "��ĸ" << c << "���ַ���" << s << "�е�һ�γ����ڵ�" << i + 1 << "��" << endl;

    system("pause");
    return 0;
}
