#include <iostream>
using namespace std;

int main()
{
    // 等比数列求和
    int a_0 = 3;   // 第一项
    int q = 2;     // 等比
    int a_n = a_0; // 每项
    int i = 0;     // 用于计数
    int n;         // 待输入的n
    int sum = 0;
    cout << "请输入n：";
    cin >> n;
    do
    {
        sum += a_n;
        a_n *= q;
        i++;
    } while (i < n);
    cout << "3+6+12+24+48+...的前" << n << "项和为：" << sum << endl;

    system("pause");
    return 0;
}
