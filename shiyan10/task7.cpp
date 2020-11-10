#include <iostream>
using namespace std;

int main()
{
    const int N = 100;
    char a[N];
    int n;
    cout << "请输入n：";
    cin >> n;

    char c; // 要删除的字符，由键盘输入的

    if (n < N)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "请输入c：";
        cin >> c;
        for (int i = 0; i < n; i++)
        {
            if (c == a[i])
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
