#include <iostream>
using namespace std;

int main()
{
    cout << "请输入应税年收入：";
    int x, y;
    cin >> x;

    if (x <= 6)
    {
        y = 0;
    }
    if (x > 6 && x <= 9.6)
    {
        y = (x - 6) * 0.03;
    }
    if (x > 9.6 && x <= 20.4)
    {
        y = (x - 9.6) * 0.10 + (9.6 - 6) * 0.03;
    }
    if (x > 20.4)
    {
        y = 0;
        cout << "暂不考虑应税年收入大于20.4万的情况" << endl;
    }
    cout << "纳税额为：" << y << endl;
    cout << "纳税后的实际年收入为：" << x - y << endl;

    system("pause");
    return 0;
}
