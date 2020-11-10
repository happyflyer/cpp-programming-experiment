#include <iostream>
using namespace std;

int main()
{
    cout << "请输入一个数：";
    int x, y;
    cin >> x;

    int a, b, c, d;
    d = x % 10;
    c = x / 10 % 10;
    b = x / 100 % 10;
    a = x / 1000;

    y = d * 1000 + c * 100 + b * 10 + a * 1;
    cout << "数字翻转后乘以2的结果是：" << y * 2 << endl;

    system("pause");
    return 0;
}
