#include <iostream>
using namespace std;

int main()
{
    // ����һ��Ԫ�ؽ�Ϊ������n*n�׾���(n������10)��
    // �Ӽ����������Ľ���n�������Ԫ�أ�
    // �ҳ������Խ�����Ԫ�ص����ֵ�������ڵ��кţ����±�+1��
    int N;
    cout << "���������Ľף�";
    cin >> N;
    int a[N][N];

    cout << "������һ��" << N << "*" << N << "����ÿ����֮���ÿո�����ÿ��������ɺ�س���" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a[i][j];
        }
    }

    // int max_a = a[0][0];
    // int max_ai = 0, max_aj = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         if (i == j && max_a < a[i][j])
    //         {
    //             max_a = a[i][j];
    //             max_ai = i;
    //             max_aj = j;
    //         }
    //     }
    // }

    int max_a = a[0][0];
    int max_ai = 0;
    for (int i = 0; i < N; i++)
    {
        if (max_a < a[i][i])
        {
            max_a = a[i][i];
            max_ai = i;
        }
    }

    cout << "�Խ��������Ԫ��Ϊ��" << max_a << "�к�Ϊ��" << max_ai + 1 << endl;

    system("pause");
    return 0;
}
