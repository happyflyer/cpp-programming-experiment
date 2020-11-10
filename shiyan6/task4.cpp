#include <iostream>
using namespace std;

int main()
{
    int num;   // 需要分解的质因数
    int i = 2; // 一个从2开始，一直往上加的数字，为了枚举num的质因数
    cout << "请输入需要分解的正整数：" << endl;
    cin >> num;
    if (num > 0)
    {
        cout << "分解质因数的结果为：" << endl;
        cout << num << "=";
        cout << i;
        num /= i;
        while (num / i >= 1)
        {
            if (num % i == 0)
            {
                cout << "*" << i;
                num /= i;
            }
            else
            {
                i++;
            }
        }
        cout << endl;
    }
    else
    {
        cout << "输入错误" << endl;
    }

    system("pause");
    return 0;
}
