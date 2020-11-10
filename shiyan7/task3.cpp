#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int a_b;               // 表示a^b
    int b_a;               // 表示b^a
    int fun(int x, int y); // 函数声明
    cout << "求a的b次方和b的a次方，请输入a，b：";
    cin >> a >> b;
    if (a > 0 && b > 0)
    {
        a_b = fun(a, b); // 函数调用
        b_a = fun(b, a); // 函数调用
        cout << "a的b次方为：" << a_b << endl;
        cout << "b的a次方为：" << b_a << endl;
        cout << "a的b次方与b的a次方的和为：" << a_b + b_a << endl;
    }
    else
    {
        cout << "输入错误！" << endl;
    }

    system("pause");
    return 0;
}

int fun(int x, int y) // 计算a^b
{
    int result = 1;
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}
