#include <iostream>
using namespace std;

// ����2^x
// Ҫ��x>=0
int exp_2(int x)
{
    if (x == 0)
        return 1;
    else
        return exp_2(x - 1) * 2;
}

// �Ӻ������ܣ�
// ʹ�õݹ鷨����������2��6��14��30������ ,�ĵ�n�
int function(int n)
{
    if (n == 1)
        return 2;
    else
        return function(n - 1) + exp_2(n);
}

int main()
{
    // ���������ܣ�
    // �Ӽ�������nֵ��ͨ�������Ӻ����������еĵ�n������
    int n;
    int a_n;
    cout << "�Ӽ�������nֵ:";
    cin >> n;

    a_n = function(n);

    cout << "�����еĵ�" << n << "��Ϊ:" << a_n << endl;

    system("pause");
    return 0;
}
