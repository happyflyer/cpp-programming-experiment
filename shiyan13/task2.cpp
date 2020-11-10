#include <iostream>
using namespace std;

int binary_sqrt(int n)
{
    int left = 1, right = n;
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        // cout << "left=" << left << ",mid=" << mid << ",right=" << right << endl;
        if (mid * mid == n)
            return mid;
        else if (mid * mid < n)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// 编写一子函数，
// 判断两个自然数x,y是否是自然数对
// （所谓自然数对是指两个自然数的和与差都是平方数，
// 如：17-8=9,17+8=25）
bool is_pair(int x, int y)
{
    if (binary_sqrt(x + y) > 0 && binary_sqrt(x - y) > 0)
        return true;
    return false;
}

int main()
{
    // 测试
    // int x;
    // cout << "input x:";
    // cin >> x;
    // cout << binary_sqrt(x) << endl;

    // 调用子函数在0<x<=50,0<y<=50且x!=y范围内找出全部自然数对
    // 隐含条件：x>y
    const int N = 50;
    for (int i = 0; i <= N; i++)
        for (int j = i + 1; j <= N; j++)
            if (is_pair(j, i))
                cout << "x=" << j << ",y=" << i << ",x+y=" << i + j << ",x-y=" << j - i << endl;

    system("pause");
    return 0;
}
