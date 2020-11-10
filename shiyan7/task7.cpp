#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int sum = 0;
    bool is_huiwen(int); // 函数声明
    cout << "请输入m和n：" << endl;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (is_huiwen(i))
        {
            // 以下这句话打印回文数
            cout << i << endl;
            sum += i;
        }
    }
    cout << m << "和" << n << "之间（包括" << m << "和" << n << "）所有回文数的和为：" << sum << endl;

    system("pause");
    return 0;
}

bool is_huiwen(int x) // 判断x是否为回文数
{
    /**
     * 一个数字是否为回文数，我们只需要把x倒过来
     * 比较x倒过来的这个数字是否和x相等
     * 就知道x是否为回文数了
     */
    bool flag = false;
    int i = 1; // 位权
    while (x / i > 0)
    {
        i *= 10;
    }
    i /= 10;
    int y = 0;   // y就是x倒过来的那个数字
    int j = 1;   // 位权
    int x_1 = x; // 备份x的值，因为以下操作会改变x的值
    while (x != 0)
    {
        y += (x / i) * j;
        x %= i;
        i /= 10;
        j *= 10;
    }
    // 下面这句话打印倒过来的那个数字
    // cout << y << endl;
    if (x_1 == y)
    {
        flag = true;
    }
    return flag;
}
