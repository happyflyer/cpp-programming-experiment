#include <iostream>
using namespace std;

int main()
{
    cout << "请输入购买数量：";
    int x, y;
    cin >> x;

    switch (x / 50)
    {
    case 0:
    {
        y = 38 * x;
        break;
    }
    case 1:
    {
        y = 35 * x;
        break;
    }
    case 2:
    case 3:
    {
        y = 32 * x;
        break;
    }
    case 4:
    case 5:
    {
        y = 28 * x;
        break;
    }
    default:
    {
        y = 38 * x;
        break;
    }
    }
    cout << "购买总金额为：" << y << endl;

    system("pause");
    return 0;
}
