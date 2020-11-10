//求出相邻的任意四个数之和，并输出
#include <iostream>
using namespace std;
int main()
{
    // 不使用指针版本
    const int N = 10; // 数组长度
    int m = 4;        // 要参与连续相加的数字个数
    int a[N];         // 存储输入的数字
    int b[N];         // 存储求和的结果

    cout << "数组中的元素为：" << endl;
    // 第一步，输入数字并存到数组a中
    for (int i = 0; i < N; i++)
        cin >> a[i];
    // 第二步，将数组b中的元素全部都赋值为0，想想为什么要这样做
    for (int i = 0; i < N; i++)
        b[i] = 0;
    // 第三步，挨个循环数组a中的元素，计算出来的结果存到数组b中的对应位置
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < m; j++)
            b[i] += a[(i + j) % N];
    }
    // 第四步，输出数组b
    cout << "相邻4个数之和分别是：" << endl;
    for (int i = 0; i < N; i++)
        cout << b[i] << " ";
    cout << endl;

    // 第五步，找数组b中的最大值
    int max = b[0];
    int max_i = 0;
    for (int i = 1; i < N; i++) // 这里从1开始，想想为什么
    {
        if (max < b[i])
        {
            max = b[i];
            max_i = i; // 这里要记录数组b中最大值的下标
        }
    }
    cout << "最大的和值是：" << max << endl;

    // 第六步，从max_i开始，连续输出四个元素
    cout << "参与求和的四个数是：";
    for (int i = max_i, j = 0; j < m; j++)
        cout << a[(i + j) % N] << " ";
    cout << endl;
    return 0;
}
