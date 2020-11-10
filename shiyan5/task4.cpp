#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // 求sinx的近似值
    /**
     * 先上泰勒展开公式：
     * sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
     * 找规律，可以发现最开始的一项是x，之后的每一项item(n)都可以写成前一项item(n-1)“乘上一点东西”，公式如下：
     * item(n) = item(n-1) * x * x / ( (2*n) * (2*n+1) )
     * 那就根据这个逻辑去写循环
     * 
     */
    int degree;
    double x;                // 转换后的弧度值
    double pi = 3.141592654; // pi常数

    cout << "请输入一个角度：";
    cin >> degree;
    x = degree * pi / 180;

    double item = x;
    double sinx = item;
    int n = 1; // 用于计数

    do
    {
        item = -item * x * x / ((2 * n) * (2 * n + 1)); // 求得新的item
        sinx += item;
        n += 1;
    } while (abs(item) > 1e-7); // 要求item的绝对值足够小，就可以保证误差很小

    cout << "sin(" << x << ")=" << sinx << endl;

    system("pause");
    return 0;
}
