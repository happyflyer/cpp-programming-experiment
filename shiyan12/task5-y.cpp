//求出相邻的任意四个数之和，并输出
#include <iostream>
using namespace std;
int main()
{
    // 使用指针版本
    const int N = 10; // 数组长度
    int m = 4;        // 要参与连续相加的数字个数
    int a[N];         // 存储输入的数字
    int b[N];         // 存储求和的结果
    int *pa = a;
    int *pb = b;

    cout << "数组中的元素为：" << endl;
    // 第一步，输入数字并存到数组a中
    for (pa = a; pa < a + N; pa++)
        cin >> *pa;
    // 第二步，将数组b中的元素全部都赋值为0，想想为什么要这样做
    for (pb = b; pb < b + N; pb++)
        *pb = 0;
    // 第三步，挨个循环数组a中的元素，计算出来的结果存到数组b中的对应位置
    // 这里需要注意的是，pa指针移动的时候，pb指针要跟着一起移动
    for (pa = a, pb = b; pa < a + N; pa++, pb++)
    {
        for (int *pi = pa; pi < pa + m; pi++)
            // *pb += *pi; // 本来应该这样写，但是这样不是首尾相连，会发生pi指针越界
            *pb += *(a + (pi - a) % 10);
    }
    // 第四步，输出数组b
    cout << "相邻4个数之和分别是：" << endl;
    for (pb = b; pb < b + N; pb++)
        cout << *pb << " ";
    cout << endl;

    // 第五步，找数组b中的最大值
    pb = b; // 每次使用指针之前，先把指针指向你先让他指向的位置
    int max = *pb;
    int max_i = 0;
    for (pb = b + 1; pb < b + N; pb++)
    {
        if (max < *pb)
        {
            max = *pb;
            max_i = pb - b; // 这里要记录数组b中最大值的下标
        }
    }
    cout << "最大的和值是：" << max << endl;

    // 第六步，从max_i开始，连续输出四个元素
    cout << "参与求和的四个数是：";
    pa = a + max_i;
    for (int j = 0; j < m; j++)
        // cout << *(pa + j) << " "; // 这样写会发生(pa + j)指针越界
        cout << *(a + (pa + j - a) % 10) << " ";
    cout << endl;
    return 0;
}
