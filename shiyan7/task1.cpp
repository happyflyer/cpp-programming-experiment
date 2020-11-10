#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    double y;
    double f(int x); // 函数声明
    cout << "请输入x:";
    cin >> x;
    y = f(x); // 函数调用
    cout << "y=" << y << endl;

    system("pause");
    return 0;
}

double f(int x)
{
    if (x > 0)
        return sqrt(x);
    else if (x == 0)
        return x;
    else
        return fabs(x);
}
