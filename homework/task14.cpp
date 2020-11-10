#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // 求pi的近似值，并统计累加的项数
    int i = 1;       // 分数序列的分母
    int j = 0;       // 记录累计的项数
    int sign = 1;    // 每项的符号
    double term = 1; // 每项
    double pi_4 = 0;
    do
    {
        pi_4 += term;
        i += 2;
        sign = -sign;          // 变正负号
        term = sign * 1.0 / i; // 求得新项
        j++;
    } while (fabs(term) >= 1e-6);
    cout << "pi = " << 4 * pi_4 << endl;
    cout << "累加的项数为：" << j << endl;

    system("pause");
    return 0;
}
