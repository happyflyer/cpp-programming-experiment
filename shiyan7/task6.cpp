#include <iostream>
using namespace std;

int main()
{
    int m, n, sum = 0, x;
    bool wanshu(int);
    cout << "��������������m,n(n>m>0):";
    cin >> m >> n;
    x = m;
    for (x = m; x <= n; x++)
        if (wanshu(x))
        {
            cout << x << endl;
            sum += x;
        }
    cout << m << "��" << n << "֮����������֮��Ϊ��" << sum << endl;

    system("pause");
    return 0;
}

bool wanshu(int p)
{
    bool flag = false;
    int i = 1, s = 0; // i�ǳ�����s�����
    for (i = 1; i < p; i++)
    {
        if (p % i == 0)
            s += i;
    }
    if (s == p)
        flag = true;
    return flag;
}
