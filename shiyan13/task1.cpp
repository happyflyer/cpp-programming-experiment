#include <iostream>
using namespace std;

// ��һ�Ӻ�����
// ��������������������Ԫ��ֵ�ı�Ϊ��ǰ����������Ԫ�صĺ�ֵ
// ������������Ԫ������ֵ����
// �Ӻ���ͷҪ��Ϊsum(int a[],int n)��n���ڴ�������Ĵ�С
void sum(int *a, int n)
{
    for (int *pa = a; pa < a + n; pa++)
    {
        *pa = 0;
        for (int *pi = a; pi <= pa; pi++)
            *pa += (pi - a) * 2 + 1;
    }
}

int main()
{
    // ������������������a[10]������Ԫ��ֵa[j]=2*j+1�����a����
    const int N = 10;
    int a[N], *pa = a;
    for (pa = a; pa < a + N; pa++)
    {
        *pa = (pa - a) * 2 + 1;
        cout << *pa << " ";
    }
    cout << endl;

    sum(a, N);

    // ������������ı���a����
    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    system("pause");
    return 0;
}
