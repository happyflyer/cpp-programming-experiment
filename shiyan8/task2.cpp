#include <iostream>
#include <iomanip>
using namespace std;

// （1）	编制一个判定某数是否为素数的子函数prime
bool is_prime(int x) // 判断一个数字是否为素数
{
    int flag = true;
    for (int i = 2; i < x / 2 + 1; i++)
    {
        if (x % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    const int N = 10;
    int a[N];
    int b[N];

    // （2）	键盘输入10个数据（这些数中有奇数、也有偶数）存入数组a中；
    cout << "请输入" << N << "个整型数：" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    // （3）	输出a数组中的最大值及其下标、最小值及其下标；
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
    cout << "a数组中最大值为：" << endl;
    cout << max_a << "，其下标为：" << max_ai << endl;
    cout << "a数组中最小值为：" << endl;
    cout << min_a << "，其下标为：" << min_ai << endl;

    // （4）	通过调用子函数prime，找出数组a中所有的素数，并存入数组b中；
    int j = 0; // 记录数组b的元素下标
    for (int i = 0; i < N; i++)
    {
        if (is_prime(a[i]))
        {
            b[j] = a[i];
            j++;
        }
    }

    // （5）	反向（即从后b[n-1]到前b[0]）输出b中元素，数据域宽为10。
    for (int k = j - 1; k >= 0; k++)
    {
        cout << setw(12) << b[k];
    }
    cout << endl;

    system("pause");
    return 0;
}
