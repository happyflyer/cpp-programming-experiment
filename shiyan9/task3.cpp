#include <iostream>
using namespace std;

int main()
{
    // 删除无序数组中的重复元素
    const int N = 10;
    // int a[N] = {3, 4, 8, 7, 5};
    int a[N];
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int avg = sum / N;
    cout << "avg: " << avg << endl;

    int n = N; // 记录删除部分元素后数组a的长度
    for (int i = 0; i < n; i++)
    {
        if (a[i] < avg)
        {
            // 从下标i开始，后面所有的元素都向前移动一位
            // 第一步操作是：a[i] = a[i + 1]
            // 最后一步操作是：a[n - 2] = a[n - 1]
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            // 因为后面元素冲向前移动了一位，所以数组长度-1
            n--;
            // a[i]位置的元素的值变化了，所以下次循环的时候，还是这个i
            i--;
        }
    }

    cout << "n: " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
