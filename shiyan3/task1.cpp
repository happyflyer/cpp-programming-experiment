#include <iostream>
using namespace std;

int main()
{
    cout << "��������������";
    int a, b, max;
    cin >> a >> b;

    max = a;
    if (a < b)
    {
        max = b;
    }
    cout << "�������е����ֵ�ǣ�" << max << endl;

    system("pause");
    return 0;
}
