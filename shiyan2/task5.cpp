#include <iostream>
using namespace std;

int main()
{
    cout << "请输入两个整数：";
    int a, b;
    cin >> a >> b;
    cout << "整数除法：" << a << "/" << b << "=" << a / b << endl;
    cout << "实数除法：" << a << "/" << b << "=" << (double)a / b << endl;

    system("pause");
    return 0;
}
