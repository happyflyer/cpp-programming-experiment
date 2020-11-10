#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int fun1(int x, int y); // 函数声明
    int fun2(int x, int y); // 函数声明
    cout << "请输入两个正整数：";
    cin >> a >> b;
    if (a > 0 && b > 0)
    {
        cout << "最大公约数：" << fun1(a, b) << endl;
        cout << "最小公倍数：" << fun2(a, b) << endl;
    }
    else
    {
        cout << "输入错误！" << endl;
    }

    system("pause");
    return 0;
}

int fun1(int x, int y) // 求x和y的最大公约数
{
    int q;
    do
    {
        q = x % y;
        x = y;
        y = q;
    } while (q != 0);
    return x;
}

int fun2(int x, int y) // 求x和y的最小公倍数
{
    return x * y / fun1(x, y);
}
