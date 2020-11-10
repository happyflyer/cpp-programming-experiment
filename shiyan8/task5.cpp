#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // 输入十个数字，有奇数和偶数
    // 让偶数在前，奇数在后
    const int N = 10;
    int a[N];

    cout << "请输入" << N << "个整型数：" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    cout << "调整后的数组为：" << endl;
    int i = 0, j = N - 1;
    while (i < j)
    {
        if (a[i] % 2 == 1 && a[j] % 2 == 0)
        {
            a[i] = a[i] + a[j];
            a[j] = a[i] - a[j];
            a[i] = a[i] - a[j];
            i++;
            j--;
        }
        else if (a[i] % 2 == 0)
        {
            i++;
        }
        else if (a[j] % 2 == 1)
        {
            j--;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << setw(12) << a[i];
        if ((i + 1) % 5 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

    system("pause");
    return 0;
}
