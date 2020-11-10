#include <iostream>
using namespace std;

// 编一子函数，
// 将主函数传递来的数组元素值改变为其前面所有数组元素的和值
// （包括该数组元素自身值），
// 子函数头要求为sum(int a[],int n)，n用于传递数组的大小
void sum(int *a, int n)
{
    for (int *pa = a; pa < a + n; pa++)
    {
        *pa = 0;
        for (int *pi = a; pi <= pa; pi++)
            *pa += (pi - a) * 2 + 1;
    }
}

int main()
{
    // 主函数定义整型数组a[10]，数组元素值a[j]=2*j+1，输出a数组
    const int N = 10;
    int a[N], *pa = a;
    for (pa = a; pa < a + N; pa++)
    {
        *pa = (pa - a) * 2 + 1;
        cout << *pa << " ";
    }
    cout << endl;

    sum(a, N);

    // 主函数中输出改变后的a数组
    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    system("pause");
    return 0;
}
