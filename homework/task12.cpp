#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // �ȱ��������
    int a, q, n, i;
    int term; // �ȱ����е�ÿ��
    int sum = 0;
    cout << "������a��q��n��";
    cin >> a >> q >> n;
    for (i = 0; i <= n; i++)
    {
        term = a * pow(q, i);
        // ������仰��ӡ�ȱ����е�ÿ��
        // cout << "��" << i + 1 << "��Ϊ��" << term << endl;
        sum += term;
    }
    cout << "�ȱ����еĺ�Ϊ��" << sum << endl;

    system("pause");
    return 0;
}
