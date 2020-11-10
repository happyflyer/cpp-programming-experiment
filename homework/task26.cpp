#include <iostream>
using namespace std;

int main()
{
    // 计算阶乘之和
    int i = 1;      // 分母那个不断增加的那个数
    int i_jiecheng; // 分母那个不算增加的那个数的阶乘
    int n;          // 待输入的n
    int result = 0;
    cout << "请输入n：";
    cin >> n;
    do
    {
        i_jiecheng = 1; // 每次开始计算阶乘之前，阶乘结果置为1
        for (int j = 1; j <= i; j++)
        {
            i_jiecheng *= j;
        }
        result += i_jiecheng;
        i++;
    } while (i <= n);
    cout << n << "项阶乘之和为：" << result << endl;

    system("pause");
    return 0;
}
