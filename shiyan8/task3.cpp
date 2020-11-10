#include <iostream>
using namespace std;

int main()
{
    // 把把一个数组中的最大值元素与第一位的元素互换
    // 最小值元素与最后一位元素互换
    const int N = 10;
    int a[N];
    cout << "请输入" << N << "个整型数：" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int max_a = a[0];
    int max_ai = 0;
    int min_a = a[0];
    int min_ai = 0;
    for (int i = 1; i < N; i++)
    {
        if (max_a < a[i])
        {
            max_a = a[i];
            max_ai = i;
        }
        if (min_a > a[i])
        {
            min_a = a[i];
            min_ai = i;
        }
    }

    if (max_a > a[0])
    {
        a[max_ai] = a[0];
        a[0] = max_a;
    }
    if (min_a < a[N - 1])
    {
        a[min_ai] = a[N];
        a[N] = min_a;
    }

    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
