#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // ���벢�洢һ���ַ�����ͳ�Ƹ��ַ�����'a'�ַ��������ִ�Сд���ĸ�����
    string s;
    // cout << "������һ���ַ�����" << endl;
    cin >> s;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 65 && s[i] == 97)
        {
            count++;
        }
    }

    cout << count << endl;

    system("pause");
    return 0;
}
