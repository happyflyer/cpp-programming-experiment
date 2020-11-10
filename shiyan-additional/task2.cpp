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

int sequential_search(int a[], int n, int x)
{
    for (int *pa = a; pa < a + n; pa++)
        if (*pa == x)
            return pa - a;
    return -1;
}

// a or b
int get_or(int a[], int b[], int c[], int m, int n)
{
    int *pa = a, *pb = b, *pc = c;
    while (pa < a + m)
        if (sequential_search(c, pc - c, *pa) < 0)
            *pc++ = *pa++;
        else
            pa++;
    while (pb < b + n)
        if (sequential_search(c, pc - c, *pb) < 0)
            *pc++ = *pb++;
        else
            pb++;
    return pc - c;
}

// a and b
int get_and(int a[], int b[], int c[], int m, int n)
{
    int *pa = a, *pb = b, *pc = c;
    while (pa < a + m)
        if (sequential_search(b, n, *pa) >= 0 && sequential_search(c, pc - c, *pa) < 0)
            *pc++ = *pa++;
        else
            pa++;
    return pc - c;
}

// a-b
int get_diff(int a[], int b[], int c[], int m, int n)
{
    int *pa = a, *pb = b, *pc = c;
    while (pa < a + m)
        if (sequential_search(b, n, *pa) < 0 && sequential_search(c, pc - c, *pa) < 0)
            *pc++ = *pa++;
        else
            pa++;
    return pc - c;
}

int main()
{
    // 设有两个整数集合a和b，求两集合的并集
    const int M = 10;
    const int N = 10;
    int a[M], *pa;
    int b[N], *pb;
    int c[M + N], *pc;

    srand(time(NULL));
    for (pa = a; pa < a + M; pa++)
        // *pa = 0 + rand() % (100 - 0 + 1);
        *pa = pa - a;
    for (pb = b; pb < b + N; pb++)
        // *pb = 0 + rand() % (100 - 0 + 1);
        *pb = pb - b + 6;

    bubble_sort(a, M);
    bubble_sort(b, N);

    for (pa = a; pa < a + M; pa++)
        cout << *pa << " ";
    cout << endl;
    for (pb = b; pb < b + N; pb++)
        cout << *pb << " ";
    cout << endl;

    // int x;
    // cout << "input x:";
    // cin >> x;
    // cout << sequential_search(a, M, x) << endl;

    int m = get_or(a, b, c, M, N);
    for (pc = c; pc < c + m; pc++)
        cout << *pc << " ";
    cout << endl;

    int n = get_and(a, b, c, M, N);
    for (pc = c; pc < c + n; pc++)
        cout << *pc << " ";
    cout << endl;

    int s = get_diff(a, b, c, M, N);
    for (pc = c; pc < c + s; pc++)
        cout << *pc << " ";
    cout << endl;

    system("pause");
    return 0;
}
