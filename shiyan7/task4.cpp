#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int fun1(int x, int y); // ��������
    int fun2(int x, int y); // ��������
    cout << "������������������";
    cin >> a >> b;
    if (a > 0 && b > 0)
    {
        cout << "���Լ����" << fun1(a, b) << endl;
        cout << "��С��������" << fun2(a, b) << endl;
    }
    else
    {
        cout << "�������" << endl;
    }

    system("pause");
    return 0;
}

int fun1(int x, int y) // ��x��y�����Լ��
{
    int q;
    do
    {
        q = x % y;
        x = y;
        y = q;
    } while (q != 0);
    return x;
}

int fun2(int x, int y) // ��x��y����С������
{
    return x * y / fun1(x, y);
}
