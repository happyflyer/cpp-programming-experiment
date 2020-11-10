#include <iostream>
using namespace std;

int main()
{
    // 一只猴子摘了N个桃子第一天吃了一半又多吃了一个,第二天又吃了余下的一半又多吃了一个,到第十天的时候发现还有一个。
    int x10 = 1;  // 第十天开始的时候有一个桃子
    int xn = x10; // 第n填开始的时候的桃子数量
    for (int i = 10; i > 1; i--)
    {
        cout << "第" << i << "天开始的桃子数量：" << xn << endl; // 打印出来方便看
        xn = (xn + 1) * 2;
    }

    cout << "第一天开始的桃子数量：" << xn << endl;

    system("pause");
    return 0;
}
