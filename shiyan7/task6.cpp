#include <iostream>
using namespace std;

int main()
{
    int m, n, sum = 0, x;
    bool wanshu(int);
    cout << "请依次输入数字m,n(n>m>0):";
    cin >> m >> n;
    x = m;
    for (x = m; x <= n; x++)
        if (wanshu(x))
        {
            cout << x << endl;
            sum += x;
        }
    cout << m << "到" << n << "之间所有完数之和为：" << sum << endl;

    system("pause");
    return 0;
}

bool wanshu(int p)
{
    bool flag = false;
    int i = 1, s = 0; // i是除数，s保存和
    for (i = 1; i < p; i++)
    {
        if (p % i == 0)
            s += i;
    }
    if (s == p)
        flag = true;
    return flag;
}
