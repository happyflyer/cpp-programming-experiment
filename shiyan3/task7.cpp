#include <iostream>
using namespace std;

int main()
{
    cout << "��������������";
    int a, b;
    cin >> a >> b;

    // ���������
    cout << "�������нϴ���ǣ�" << (a > b ? a : b) << endl;

    // if-else���
    if (a > b)
    {
        cout << "�������нϴ���ǣ�" << a << endl;
    }
    else
    {
        cout << "�������нϴ���ǣ�" << b << endl;
    }

    system("pause");
    return 0;
}
