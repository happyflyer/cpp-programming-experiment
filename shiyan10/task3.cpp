#include <iostream>
using namespace std;

int main()
{
    // 编写程序，输入数字n（n<10），
    // 输出n层正方形图案。正方形图案最外层是第一层，依次往内，
    // 每层用的数字和层数相同。
    int n;
    cout << "请输入正方形层数：";
    cin >> n;
    int a[2 * n - 1][2 * n - 1];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         a[i][j] = i + 1;                         // 上边左
    //         a[i][2 * n - 2 - j] = i + 1;             // 上边右
    //         a[2 * n - 2 - i][j] = i + 1;             // 下边左
    //         a[2 * n - 2 - i][2 * n - 2 - j] = i + 1; // 下边右
    //         a[j][i] = i + 1;                         // 左边上
    //         a[j][2 * n - 2 - i] = i + 1;             // 左边下
    //         a[2 * n - 2 - j][i] = i + 1;             // 右边上
    //         a[2 * n - 2 - j][2 * n - 2 - i] = i + 1; // 右边下
    //     }
    // }

    // for (int i = 0; i < n; i++) // 循环层数
    // {
    //     for (int j = i; j < 2 * n - 1 - i; j++) // 每层的赋值操作与层数有关，层数越大，开始点越靠后，并且结束点越靠前
    //     {
    //         for (int k = i; k < 2 * n - 1 - i; k++)
    //         {
    //             a[j][k] = i + 1; // 上边
    //             a[k][j] = i + 1; // 左边
    //             a[2 * n - 2 - i][k] = i + 1; // 下边
    //             a[j][2 * n - 2 - i] = i + 1; // 右边
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++) // 循环层数
    {
        for (int j = i; j < 2 * n - 1 - i; j++) // 每层的赋值操作与层数有关，层数越大，开始点越靠后，并且结束点越靠前
        {
            for (int k = i; k < 2 * n - 1 - i; k++)
            {
                a[j][k] = i + 1;
            }
        }
    }

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
