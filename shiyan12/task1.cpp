#include <iostream>
using namespace std;

int main()
{
    /**
     * 级数
     * 求e
     * i从0开始的结果是e
     * i从1开始的结果是e-1
     */
    // 指针变量在声明时被赋值
    double x, *px = &x;
    // 指针变量先声明，后赋值
    // double x, *px;
    // px = &x;

    int n, *pn = &n;
    double sum = 0, *psum = &sum;

    cout << "input x and n:";
    cin >> *px >> *pn;

    double term = 1; // 每项的值
    int i;           // 循环变量

    for (i = 1; i <= *pn; i++)
    {
        term *= *px / (i == 0 ? 1 : i); // 因为i=0时i不能当作除数，特殊规定0!=1
        cout << "term" << i << "=" << term << endl;
        *psum += term;
    }
    cout << "sum=" << sum << endl;

    system("pause");
    return 0;
}
