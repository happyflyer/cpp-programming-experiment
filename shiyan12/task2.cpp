#include <iostream>
using namespace std;

int main()
{
    /**
     * 统计一维整型数组中能被3整除的元素个数，并输出。
     * 要求：数组元素由键盘输入；用指针方式访问数组。
     */
    const int N = 10;
    int a[N], *pa;
    // 第一种数组指针变量赋值方式
    // pa = &a[0];
    // 第二种数组指针变量赋值方式
    // pa = a;

    for (pa = a; pa < a + N; pa++)
        cin >> *pa;

    for (pa = a; pa < a + N; pa++)
        if (*pa % 3 == 0)
            cout << *pa << " ";
    cout << endl;

    system("pause");
    return 0;
}
