#include <iostream>
using namespace std;

int main()
{
    cout << "������һ����λ����";
    int a;
    cin >> a;

    cout << "��λ��" << a % 10 << endl;
    cout << "ʮλ��" << a / 10 % 10 << endl;
    cout << "��λ��" << a / 100 % 10 << endl;
    cout << "ǧλ��" << a / 1000 % 10 << endl;

    system("pause");
    return 0;
}
