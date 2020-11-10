#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // 求a+aa+aaa+...的和
    // 这实际上是嵌套循环
    // 就是循环里面再循环
    int a;
    int n;
    double term; // 每项
    double sum = 0;
    cout << "请输入a、n：";
    cin >> a >> n;
    for (int i = 0; i < n; i++)
    {
        term = 0;
        for (int j = 0; j < i + 1; j++)
        {
            term += a * pow(10, j);
        }
        sum += term;
        // 以下是打印输出
        if (i == 0)
            cout << term;
        else
            cout << " + " << term;
    }
    cout << " = " << sum << endl;

    system("pause");
    return 0;
}
