#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int N = 10;
    int a[N];

    // （1）	利用rand()函数产生10个10~100之间的整数，存入数组a中并输出；
    cout << "10个10~100间的随机整数为：" << endl;
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        a[i] = 10 + rand() % (100 - 10 + 1);
        cout << a[i] << " ";
    }
    cout << endl;

    // （2）	使用冒泡排序法，将数组a中的数据按降序排列，并输出；
    int i, j, temp;
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "按从大到小排列的结果为：" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // （3）	使用折半查找法在数组a中查找是否有键盘输入的指定数据，
    // 并输出查找结论（没找到或在第X个位置找到）。
    cout << "请输入要查找的数：";
    int x;
    cin >> x;
    int find(int a[], int min_ai, int max_ai, int target_value); // 函数声明
    int target_ai = find(a, 0, N, x);                            // 函数调用
    if (target_ai >= 0)
    {
        cout << x << "在第" << target_ai + 1 << "个位置" << endl; // 位置=下标+1
    }
    else
    {
        cout << x << "在数组中未找到" << endl;
    }

    system("pause");
    return 0;
}

// 折半查找法，如果target_value可以在a数组中找到，返回所在位置下标，如果找不到，返回-1
// a[]是从大到小或从小到大的一个有序数组
// min_ai是查找范围的最小下标
// min_ai是查找范围的最大下标
// target_value是查找的目标值
/**
 * 折半查找法适用范围：有序数组
 * 每次比较目标和中间值，
 * 如果目标值比中间值大或者小，查找范围就减半
 * 如果目标值与中间值相等就说明找到
 * 结束条件就是查找范围缩小到0
 * 如果范围缩小为0还没有找到，就说明找不到目标值
 */
int find(int a[], int min_ai, int max_ai, int target_value) // 函数定义
{
    while (min_ai <= max_ai)
    {
        int mid_ai = (min_ai + max_ai) / 2;
        if (a[mid_ai] > target_value)
        {
            min_ai = mid_ai + 1;
        }
        else if (a[mid_ai] < target_value)
        {
            max_ai = mid_ai - 1;
        }
        else
        {
            return mid_ai;
        }
    }
    return -1;
}
