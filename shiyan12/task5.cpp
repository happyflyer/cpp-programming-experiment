#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    /**
     * 有一组整数，
     * 其排列形式为：8，5，13，15，3，11，6，7，22，10，
     * 且尾部的10和头部的8首尾相连，构成一个环形。
     * 编程求出相邻的任意四个数之和，并输出。
     * 然后找出相加之和最大的四个数，输出求和的结果以及这四个数。
     * 要求：用指针方式访问数组。程序运行结果类似于下图，
     * 实验报告中的运行结果截图，不能与下图中的数据一样。
     */
    const int N = 10;
    int a[N], *pa;

    srand(time(NULL));
    for (pa = a; pa < a + N; pa++)
        // *pa = 0 + rand() % (100 - 0 + 1);
        *pa = (pa - a);

    cout << "数组中的元素为：" << endl;
    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    int m, *pm = &m;
    *pm = 4; // m = 4

    int b[N], *pb; // 存放求和结果
    for (pb = b; pb < b + N; pb++)
        *pb = 0;

    for (pa = a, pb = b; pa < a + N; pa++, pb++)
        for (int *pi = pa; pi < pa + *pm; pi++)
            // 这一步是关键，对N取余数就实现了首尾相连
            *pb += *(a + (pi - a) % N);

    cout << "相邻" << *pm << "个数之和分别是：" << endl;
    for (pb = b; pb < b + N; pb++)
        cout << *pb << " ";
    cout << endl;

    pb = b; // pb指针重置
    int max_b = *pb, *pmax_b = &max_b;
    int max_bi = 0, *pmax_bi = &max_bi;
    for (pb = b + 1; pb < b + N; pb++)
        if (*pmax_b < *pb)
        {
            *pmax_b = *pb;
            *pmax_bi = pb - b;
        }
    cout << "最大的和值是：" << *pmax_b << endl;

    cout << "参与求和的" << *pm << "个数是：";
    for (pa = a + *pmax_bi; pa < a + *pmax_bi + *pm; pa++)
        cout << *pa << " ";
    cout << endl;

    system("pause");
    return 0;
}
