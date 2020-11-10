#include <iostream>
using namespace std;

// 计算2^x
// 要求x>=0
int exp_2(int x)
{
    if (x == 0)
        return 1;
    else
        return exp_2(x - 1) * 2;
}

// 子函数功能：
// 使用递归法，计算数列2，6，14，30，…… ,的第n项。
int function(int n)
{
    if (n == 1)
        return 2;
    else
        return function(n - 1) + exp_2(n);
}

int main()
{
    // 主函数功能：
    // 从键盘输入n值，通过调用子函数计算数列的第n项并输出。
    int n;
    int a_n;
    cout << "从键盘输入n值:";
    cin >> n;

    a_n = function(n);

    cout << "该数列的第" << n << "项为:" << a_n << endl;

    system("pause");
    return 0;
}
