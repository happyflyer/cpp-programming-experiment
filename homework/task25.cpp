#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // 估算数学常量e的近似值
    int a_0 = 1;       // 第一项
    int i = 1;         // 分母那个不断增加的那个数
    int i_jiecheng;    // 分母那个不算增加的那个数的阶乘
    double term = a_0; // 每项
    double result = 0;
    do
    {
        result += term;
        i_jiecheng = 1; // 每次开始计算阶乘之前，阶乘结果置为1
        for (int j = 1; j <= i; j++)
        {
            i_jiecheng *= j;
        }
        term = 1.0 / i_jiecheng;
        i++;
    } while (fabs(term) > 1e-6);
    cout << "数学常数e的近似值为：" << result << endl;

    system("pause");
    return 0;
}
