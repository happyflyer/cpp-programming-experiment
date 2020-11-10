#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int sum = 0; // 表示m到n之间所有完数的和
    bool fun(int x);
    cout << "请依次输入数字m,n(n>m>0)：" << endl;
    cin >> m >> n;
    if (n > m && m > 0)
    {
        for (int i = m; i <= n; i++)
        {
            if (fun(i))
            {
                sum += i;
                // 下面这句话打印完数
                // cout << i << endl;
            }
        }
        cout << m << "~" << n << "之间所有完数之和为：" << sum << endl;
    }
    else
    {
        cout << "输入错误！" << endl;
    }

    system("pause");
    return 0;
}

bool fun(int x)
{
    int sum = 0; // x的所有真因子的和
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
