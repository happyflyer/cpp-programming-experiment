#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a, b;
    int c;                                // 1-3的随机数，根据c得到op
    char op;                              // 预算符号，+或-或*
    int right_result;                     // 正确的答案
    int input_result;                     // 输入的答案
    int calculate(int a, int b, char op); // 函数声明
    srand(time(NULL));
    a = 1 + rand() % (10 - 1 + 1);
    b = 1 + rand() % (10 - 1 + 1);
    c = 1 + rand() % (3 - 1 + 1);
    switch (c)
    {
    case 1:
    {
        op = '+';
        break;
    }
    case 2:
    {
        op = '-';
        break;
    }
    case 3:
    {
        op = '*';
        break;
    }
    }
    right_result = calculate(a, b, op); // 函数调用
    cout << "请计算" << a << op << b << "=";
    cin >> input_result;
    if (input_result == right_result)
    {
        cout << "计算准确！" << endl;
    }
    else
    {
        cout << "计算错误！" << a << op << b << "=" << right_result << endl;
    }

    system("pause");
    return 0;
}

int calculate(int a, int b, char op)
{
    int result = 0;
    switch (op)
    {
    case '+':
    {
        result = a + b;
        break;
    }
    case '-':
    {
        result = a - b;
        break;
    }
    case '*':
    {
        result = a * b;
        break;
    }
    }
    return result;
}
