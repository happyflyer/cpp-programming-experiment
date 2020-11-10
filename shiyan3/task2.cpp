#include <iostream>
using namespace std;

int main()
{
    cout << "请输入一个整数：";
    int a;
    cin >> a;

    if (a % 7 == 0)
    {
        cout << a << "能被7整除" << endl;
    }
    else
    {
        cout << a << "不能被7整除" << endl;
    }

    system("pause");
    return 0;
}
