#include <iostream>
using namespace std;

// 子函数功能：
// 将主函数求出的斐波那契数列前n项反序存放。
// 函数头要求为void fbnq(int*p,int n)，p指向数组a。
void fbnq(int *p, int n)
{
    for (int *pa = p; pa < p + n / 2; pa++)
    {
        *pa += *(p + n - 1 - (pa - p));
        *(p + n - 1 - (pa - p)) = *pa - *(p + n - 1 - (pa - p));
        *pa -= *(p + n - 1 - (pa - p));
    }
}

int main()
{
    // 主函数功能：
    // 求出斐波那契数列的前n项存入数组a[20]中，
    // 开始两项均为1，将子函数反序存放后的结果输出；
    const int N = 20;
    int a[N], *pa = a;

    *pa = 1;
    *(pa + 1) = 1;
    for (pa = a + 2; pa < a + N; pa++)
        *pa = *(pa - 2) + *(pa - 1);

    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    fbnq(a, N);

    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    system("pause");
    return 0;
}
