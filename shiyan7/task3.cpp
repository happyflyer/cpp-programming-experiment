#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int a_b;               // ��ʾa^b
    int b_a;               // ��ʾb^a
    int fun(int x, int y); // ��������
    cout << "��a��b�η���b��a�η���������a��b��";
    cin >> a >> b;
    if (a > 0 && b > 0)
    {
        a_b = fun(a, b); // ��������
        b_a = fun(b, a); // ��������
        cout << "a��b�η�Ϊ��" << a_b << endl;
        cout << "b��a�η�Ϊ��" << b_a << endl;
        cout << "a��b�η���b��a�η��ĺ�Ϊ��" << a_b + b_a << endl;
    }
    else
    {
        cout << "�������" << endl;
    }

    system("pause");
    return 0;
}

int fun(int x, int y) // ����a^b
{
    int result = 1;
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}
