#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a, b;
    int c;                                // 1-3�������������c�õ�op
    char op;                              // Ԥ����ţ�+��-��*
    int right_result;                     // ��ȷ�Ĵ�
    int input_result;                     // ����Ĵ�
    int calculate(int a, int b, char op); // ��������
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
    right_result = calculate(a, b, op); // ��������
    cout << "�����" << a << op << b << "=";
    cin >> input_result;
    if (input_result == right_result)
    {
        cout << "����׼ȷ��" << endl;
    }
    else
    {
        cout << "�������" << a << op << b << "=" << right_result << endl;
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
