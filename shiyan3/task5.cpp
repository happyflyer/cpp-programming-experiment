#include <iostream>
using namespace std;

int main()
{
    cout << "������Ӧ˰�����룺";
    int x, y;
    cin >> x;

    if (x <= 6)
    {
        y = 0;
    }
    if (x > 6 && x <= 9.6)
    {
        y = (x - 6) * 0.03;
    }
    if (x > 9.6 && x <= 20.4)
    {
        y = (x - 9.6) * 0.10 + (9.6 - 6) * 0.03;
    }
    if (x > 20.4)
    {
        y = 0;
        cout << "�ݲ�����Ӧ˰���������20.4������" << endl;
    }
    cout << "��˰��Ϊ��" << y << endl;
    cout << "��˰���ʵ��������Ϊ��" << x - y << endl;

    system("pause");
    return 0;
}
