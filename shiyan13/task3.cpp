#include <iostream>
using namespace std;

// �Ӻ������ܣ�
// �������������쳲���������ǰn����š�
// ����ͷҪ��Ϊvoid fbnq(int*p,int n)��pָ������a��
void fbnq(int *p, int n)
{
    for (int *pa = p; pa < p + n / 2; pa++)
    {
        *pa += *(p + n - 1 - (pa - p));
        *(p + n - 1 - (pa - p)) = *pa - *(p + n - 1 - (pa - p));
        *pa -= *(p + n - 1 - (pa - p));
    }
}

int main()
{
    // ���������ܣ�
    // ���쳲��������е�ǰn���������a[20]�У�
    // ��ʼ�����Ϊ1�����Ӻ��������ź�Ľ�������
    const int N = 20;
    int a[N], *pa = a;

    *pa = 1;
    *(pa + 1) = 1;
    for (pa = a + 2; pa < a + N; pa++)
        *pa = *(pa - 2) + *(pa - 1);

    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    fbnq(a, N);

    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    system("pause");
    return 0;
}
