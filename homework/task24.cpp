#include <iostream>
using namespace std;

int main()
{
    // 阶乘
    int a_n = 1;    // 第一项
    int i = 0;      // 用于计数
    int n;          // 待输入的n
    int result = 1; // 阶乘的初始化结果比设置为1，而不是0
    cout << "请输入n：";
    cin >> n;
    do
    {
        result *= a_n;
        a_n++;
        i++;
    } while (i < n);
    cout << n << "! = " << result << endl;

    system("pause");
    return 0;
}
