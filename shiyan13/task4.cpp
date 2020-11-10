#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 冒泡排序
void bubble_sort(int a[], int n)
{
    for (int *pi = a; pi < a + n - 1; pi++)
        for (int *pj = a; pj < a + n - 1 - (pi - a); pj++)
            if (*pj > *(pj + 1))
                swap(*pj, *(pj + 1));
}

// 子函数头要求为void merge(int a[],int b[],int c[],int m,int n)，
// m用来传递a数组元素个数，
// n传递b数组元素个数。
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
    // 有两个从小到大的整型有序数组a和b，
    // 编一子函数将这两个数组合并为从小到大的有序数组c，
    // 整个合并过程中c保持有序；
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
