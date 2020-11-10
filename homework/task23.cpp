#include <iostream>
using namespace std;

int main()
{
    // 加减交替求和
    int a_0 = 1;   // 第一项
    int d = 1;     // 等差
    int sign = 1;  // 每项的正负号
    int a_n = a_0; // 每项
    int i = 0;     // 用于计数
    int n;         // 待输入的n
    int sum = 0;
    cout << "请输入n：";
    cin >> n;
    do
    {
        sum += sign * a_n; // 每次累加的时候，前面加一个正负号
        a_n += d;
        sign = -sign; // 变正负号
        i++;
    } while (i < n);
    cout << "1-2+3-4+5-6+...+99-100的前" << n << "项和为：" << sum << endl;

    system("pause");
    return 0;
}
