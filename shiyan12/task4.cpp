#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    /**
     * 编程将一维数组中保存的10个整数循环左移m位,
     * m的值由键盘输入。
     * 例如：
     * 数组元素为：8,5,13,21,3,2,6,7,12,10；
     * m的值为3,
     * 则移动后的数组为：21,3,2,6,7,12,10,8,5,13。
     * 要求：用指针方式访问数组,程序中只能使用一个数组
     */
    const int N = 10;
    int a[N], *pa;

    srand(time(NULL));
    for (pa = a; pa < a + N; pa++)
        *pa = 0 + rand() % (100 - 0 + 1);

    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    int m, *pm = &m;
    cout << "input m:";
    cin >> *pm;

    if (m > 0 && m < N)
    {
        // 程序的思路是：每次移动一位，移动m次
        int temp;
        while (m > 0)
        {
            pa = a; // 先重置指针pa到a数组的第一位
            temp = *pa;
            for (pa = a; pa < a + N - 1; pa++)
                *pa = *(pa + 1);
            *pa = temp; // 此时指针pa在a数组的最后一位
            m--;
        }
    }

    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    system("pause");
    return 0;
}
