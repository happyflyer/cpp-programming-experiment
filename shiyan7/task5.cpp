#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int sum = 0; // ��ʾm��n֮�����������ĺ�
    bool fun(int x);
    cout << "��������������m,n(n>m>0)��" << endl;
    cin >> m >> n;
    if (n > m && m > 0)
    {
        for (int i = m; i <= n; i++)
        {
            if (fun(i))
            {
                sum += i;
                // ������仰��ӡ����
                // cout << i << endl;
            }
        }
        cout << m << "~" << n << "֮����������֮��Ϊ��" << sum << endl;
    }
    else
    {
        cout << "�������" << endl;
    }

    system("pause");
    return 0;
}

bool fun(int x)
{
    int sum = 0; // x�����������ӵĺ�
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    if (sum == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}
