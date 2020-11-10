#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// ð������
void bubble_sort(int a[], int n)
{
    for (int *pi = a; pi < a + n - 1; pi++)
        for (int *pj = a; pj < a + n - 1 - (pi - a); pj++)
            if (*pj > *(pj + 1))
                swap(*pj, *(pj + 1));
}

// �Ӻ���ͷҪ��Ϊvoid merge(int a[],int b[],int c[],int m,int n)��
// m��������a����Ԫ�ظ�����
// n����b����Ԫ�ظ�����
void merge(int a[], int b[], int c[], int m, int n)
{
    int *pa = a, *pb = b, *pc = c;
    while (pa < a + m && pb < b + n)
        if (*pa < *pb)
            *pc++ = *pa++;
        else
            *pc++ = *pb++;
    while (pa < a + m)
        *pc++ = *pa++;
    while (pb < b + n)
        *pc++ = *pb++;
}

int main()
{
    // ��������С�����������������a��b��
    // ��һ�Ӻ���������������ϲ�Ϊ��С�������������c��
    // �����ϲ�������c��������
    const int M = 10;
    const int N = 5;
    int a[M], *pa;
    int b[N], *pb;
    int c[M + N], *pc;

    srand(time(NULL));
    for (pa = a; pa < a + M; pa++)
        *pa = 0 + rand() % (100 - 0 + 1);
    for (pb = b; pb < b + N; pb++)
        *pb = 0 + rand() % (100 - 0 + 1);

    bubble_sort(a, M);
    bubble_sort(b, N);

    for (pa = a; pa < a + M; pa++)
        cout << *pa << " ";
    cout << endl;
    for (pb = b; pb < b + N; pb++)
        cout << *pb << " ";
    cout << endl;

    merge(a, b, c, M, N);

    for (pc = c; pc < c + M + N; pc++)
        cout << *pc << " ";
    cout << endl;

    system("pause");
    return 0;
}
