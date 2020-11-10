#include <iostream>
using namespace std;

int main()
{
    cout << "请输入两个数：";
    int a, b, max;
    cin >> a >> b;

    max = a;
    if (a < b)
    {
        max = b;
    }
    cout << "两个数中的最大值是：" << max << endl;

    system("pause");
    return 0;
}
