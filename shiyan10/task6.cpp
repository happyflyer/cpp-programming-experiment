#include <iostream>
using namespace std;

int main()
{
    const int N = 100;
    int a[N];
    int n;
    cout << "请输入n：";
    cin >> n;

    int max_a;
    int max_ai;
    int min_a;
    int min_ai;

    int sum = 0;
    double avg;

    if (n < N)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        /**
         * 删除一个数组中最大元素
         * 第一步，找打最大的元素和最大元素的下标
         * 第二步，从最大元素的下标开始，后面元素依次迁移，数组总数-1，实现删除
         */
        max_a = a[0];
        max_ai = 0;
        for (int i = 1; i < n; i++)
        {
            if (max_a < a[i])
            {
                max_a = a[i];
                max_ai = i;
            }
        }
        for (int i = max_ai; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n -= 1;
        /**
         * 删除最小元素同理，具体代码差不多
         * 要看以下程序的运行结果前，请注释上面的删除数组中最大值的程序
         */
        min_a = a[0];
        min_ai = 0;
        for (int i = 1; i < n; i++)
        {
            if (min_a > a[i])
            {
                min_a = a[i];
                min_ai = i;
            }
        }
        for (int i = min_ai; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n -= 1;

        /**
         * 删除一个数组中大于或小于平均值的元素
         * 第一步，计算数组的平均值
         * 第二步，循环数组中的元素，如果元素大于或小于平均值，就把该元素后面的元素依次向前移动一位
         * 要看以下程序的运行结果前，请注释上面的程序
         */
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        avg = sum * 1.0 / n;
        cout << "数组的平均值为：" << avg << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > avg) // 此时删除数组中大于平均值的元素
            {
                for (int j = i; j < n - 1; j++)
                {
                    a[j] = a[j + 1];
                }
                n -= 1;
                i--; // 因为从下标i开始的后面元素都向前移动了一位，需要重新从下标i开始循环
            }
        }

        /**
         * 删除数组中的奇数或偶数
         * 要看以下程序的运行结果前，请注释上面的程序
         */
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0) // 此时删除数组中的奇数
            {
                for (int j = i; j < n - 1; j++)
                {
                    a[j] = a[j + 1];
                }
                n -= 1;
                i--; // 因为从下标i开始的后面元素都向前移动了一位，需要重新从下标i开始循环
            }
        }

        // 打印数组a
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
