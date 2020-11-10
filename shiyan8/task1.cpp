#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int N = 15;
    double a[N + 1];
    double sum = 0;

    // （1）	键盘输入15个实型数据存入数组a中，并按照每行输出5个的格式，输出该数组；
    cout << "请输入" << N << "个实型数：" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        sum += a[i];
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

    // （2）	计算数组a中15个元素的平均值，并将它存储在a中有效范围的末位
    // （即a中已有15个有效元素，所以，该平均值应该被存入a[15]中。提示：数组长度应不小于16）；
    a[N] = sum / N;

    // （3）	调整a数组中前15个元素的位置，即存放平均值的元素a[15]保持不动。
    // 调整规则是：元素值小于平均值的放在数组后半部分、大于等于平均值的放在数组前半部分
    // 只能使用数组a，不能借助于其它数组。
    cout << "调整后的数组为：" << endl;
    int i = 0, j = N - 1;
    while (i < j)
    {
        if (a[i] < a[N] && a[j] > a[N])
        {
            // 以下这句话实现不借助temp中间变量胡亮两个数的值
            a[i] = a[i] + a[j];
            a[j] = a[i] - a[j];
            a[i] = a[i] - a[j];
            i++;
            j--;
        }
        else if (a[i] > a[N])
        {
            i++;
        }
        else if (a[j] < a[N])
        {
            j--;
        }
    }

    // （4）	输出调整以后的a数组。
    for (int i = 0; i <= N; i++)
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
