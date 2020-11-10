#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // 等比数列求和
    int a, q, n, i;
    int term; // 等比数列的每项
    int sum = 0;
    cout << "请输入a，q，n：";
    cin >> a >> q >> n;
    for (i = 0; i <= n; i++)
    {
        term = a * pow(q, i);
        // 下面这句话打印等比数列的每项
        // cout << "第" << i + 1 << "项为：" << term << endl;
        sum += term;
    }
    cout << "等比数列的和为：" << sum << endl;

    system("pause");
    return 0;
}
