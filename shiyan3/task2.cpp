#include <iostream>
using namespace std;

int main()
{
    cout << "������һ��������";
    int a;
    cin >> a;

    if (a % 7 == 0)
    {
        cout << a << "�ܱ�7����" << endl;
    }
    else
    {
        cout << a << "���ܱ�7����" << endl;
    }

    system("pause");
    return 0;
}
