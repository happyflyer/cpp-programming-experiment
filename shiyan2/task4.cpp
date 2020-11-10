#include <iostream>
using namespace std;

int main()
{
    cout << "请输入一个四位数：";
    int a;
    cin >> a;

    cout << "个位：" << a % 10 << endl;
    cout << "十位：" << a / 10 % 10 << endl;
    cout << "百位：" << a / 100 % 10 << endl;
    cout << "千位：" << a / 1000 % 10 << endl;

    system("pause");
    return 0;
}
