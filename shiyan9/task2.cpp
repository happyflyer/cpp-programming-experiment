#include <iostream>
using namespace std;

int main()
{
    // （1）	自动生成斐波那契数列前10项的值，存入数组a，并输出
    // （斐波那契数列前两项的值为1，从第三项开始，每一项的值是前两项值的和）；
    const int N = 10;
    int a[N + 1];
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < N; i++)
    {
        a[i] = a[i - 2] + a[i - 1];
    }
    cout << "自动生成的" << N << "个整数：" << endl;
    for (int i = 1; i < N; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;

    // （2）	将键盘输入的一个数据插入数组a，使得数组a中的元素仍然保持有序；
    cout << "输入待插入的数据：";
    int x;
    cin >> x;
    int j = 0; // 记录x应该插入的位置
    while (x > a[j])
    {
        j++;
    }
    // 以下打印看一下x应该插入位置的下标
    // cout << j << endl;
    for (int i = N; i > j; i--)
    {
        a[i] = a[i - 1]; // 下标j以后的元素依次往后移一位
    }
    a[j] = x; // 下标j的元素赋值为新的值
    cout << "插入后的数据序列为：" << endl;
    for (int i = 0; i < N + 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // （3）	删除数组a中的重复数据，并输出删除后的结果；
    int pos = 1; // 记录数组中要保留的数据个数
    int k;
    for (int i = 1; i < N + 1; i++) // 从第二个元素开始，依次考察是否与前面已经保存的元素是否相等
    {
        for (k = 0; k < pos; k++) // 循环已经保存的元素
        {
            if (a[i] == a[k])
            {
                break;
            }
        }
        if (k >= pos) // 如果比较之后与pos之前的元素都不相等，那么当前元素可以被保存下来
        {
            a[pos] = a[i];
            pos++;
        }
    }
    cout << "去重后的数据序列为：" << endl;
    for (int i = 0; i < pos; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;


    // （4）	求出数组a所有元素的平均值，并输出；
    double sum = 0;
    for (int i = 0; i < pos; i++)
    {
        sum += a[i];
    }
    cout << fixed;
    cout.precision(2);
    cout << "数组a所有元素的平均值为：" << sum / pos << endl;

    // （5）	删除数组a中所有低于平均值的元素，并输出删除后的结果。
    // 注：本题只能使用一个数组。
    double avg = sum / pos;
    int pos2 = 0; // 记录数组中要保留的数据个数
    for (int i = 0; i < pos; i++)
    {
        if (a[i] > avg)
        {
            a[pos2] = a[i];
            pos2++;
        }
    }
    cout << "数组中高于平均值的元素：" << endl;
    for (int i = 0; i < pos2; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;


    system("pause");
    return 0;
}
