#include <iostream>
using namespace std;

int main()
{
    int num;   // ��Ҫ�ֽ��������
    int i = 2; // һ����2��ʼ��һֱ���ϼӵ����֣�Ϊ��ö��num��������
    cout << "��������Ҫ�ֽ����������" << endl;
    cin >> num;
    if (num > 0)
    {
        cout << "�ֽ��������Ľ��Ϊ��" << endl;
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
        cout << "�������" << endl;
    }

    system("pause");
    return 0;
}
