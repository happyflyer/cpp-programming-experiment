#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int sum = 0;
    bool is_huiwen(int); // ��������
    cout << "������m��n��" << endl;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (is_huiwen(i))
        {
            // ������仰��ӡ������
            cout << i << endl;
            sum += i;
        }
    }
    cout << m << "��" << n << "֮�䣨����" << m << "��" << n << "�����л������ĺ�Ϊ��" << sum << endl;

    system("pause");
    return 0;
}

bool is_huiwen(int x) // �ж�x�Ƿ�Ϊ������
{
    /**
     * һ�������Ƿ�Ϊ������������ֻ��Ҫ��x������
     * �Ƚ�x����������������Ƿ��x���
     * ��֪��x�Ƿ�Ϊ��������
     */
    bool flag = false;
    int i = 1; // λȨ
    while (x / i > 0)
    {
        i *= 10;
    }
    i /= 10;
    int y = 0;   // y����x���������Ǹ�����
    int j = 1;   // λȨ
    int x_1 = x; // ����x��ֵ����Ϊ���²�����ı�x��ֵ
    while (x != 0)
    {
        y += (x / i) * j;
        x %= i;
        i /= 10;
        j *= 10;
    }
    // ������仰��ӡ���������Ǹ�����
    // cout << y << endl;
    if (x_1 == y)
    {
        flag = true;
    }
    return flag;
}
