#include <iostream>
using namespace std;

int main()
{
    cout << "**********��һ��**********" << endl;
    cout << "1.������" << endl;
    cout << "2.��ʯͷ" << endl;
    cout << "3.����" << endl;
    cout << "**************************" << endl;
    cout << "������ס��Ҳ�ȭ���룺" << endl;

    int a, b;
    cin >> a >> b;
    switch (a - b)
    {
    case -2:
    case 1:
    {
        cout << "�׻�ʤ" << endl;
        break;
    }
    case 0:
    {
        cout << "ƽ��" << endl;
        break;
    }
    case -1:
    case 2:
    {
        cout << "�һ�ʤ" << endl;
        break;
    }
    }

    system("pause");
    return 0;
}
