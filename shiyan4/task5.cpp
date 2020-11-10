#include <iostream>
using namespace std;

int main()
{
    cout << "**********新一局**********" << endl;
    cout << "1.出剪子" << endl;
    cout << "2.出石头" << endl;
    cout << "3.出布" << endl;
    cout << "**************************" << endl;
    cout << "请输入甲、乙猜拳代码：" << endl;

    int a, b;
    cin >> a >> b;
    switch (a - b)
    {
    case -2:
    case 1:
    {
        cout << "甲获胜" << endl;
        break;
    }
    case 0:
    {
        cout << "平局" << endl;
        break;
    }
    case -1:
    case 2:
    {
        cout << "乙获胜" << endl;
        break;
    }
    }

    system("pause");
    return 0;
}
