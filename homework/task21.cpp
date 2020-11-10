#include <iostream>
using namespace std;

int main()
{
    // 等差数列求和
    int a_0 = 1;   // 第一项
    int d = 3;     // 等差
    int a_n = a_0; // 每项
    int i = 0;     // 用于计数
    int n;         // 待输入的n
    int sum = 0;
    cout << "请输入n：";
    cin >> n;
    do
    {
        sum += a_n;
        a_n += d;
        i++;
    } while (i < n);
    cout << "1+4+7+10+13+...的前" << n << "项和为：" << sum << endl;

    system("pause");
    return 0;
}
