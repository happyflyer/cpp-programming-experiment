#include <iostream>
using namespace std;

int main()
{
    cout << "请输入两个数：";
    int a, b;
    cin >> a >> b;

    // 条件运算符
    cout << "两个数中较大的是：" << (a > b ? a : b) << endl;

    // if-else语句
    if (a > b)
    {
        cout << "两个数中较大的是：" << a << endl;
    }
    else
    {
        cout << "两个数中较大的是：" << b << endl;
    }

    system("pause");
    return 0;
}
