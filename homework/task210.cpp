#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // ��a+aa+aaa+...�ĺ�
    // ��ʵ������Ƕ��ѭ��
    // ����ѭ��������ѭ��
    int a;
    int n;
    double term; // ÿ��
    double sum = 0;
    cout << "������a��n��";
    cin >> a >> n;
    for (int i = 0; i < n; i++)
    {
        term = 0;
        for (int j = 0; j < i + 1; j++)
        {
            term += a * pow(10, j);
        }
        sum += term;
        // �����Ǵ�ӡ���
        if (i == 0)
            cout << term;
        else
            cout << " + " << term;
    }
    cout << " = " << sum << endl;

    system("pause");
    return 0;
}
