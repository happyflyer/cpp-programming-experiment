#include <iostream>
using namespace std;

int main()
{
    int N = 10;
    int M = 5;
    int a[N], b[M], c[M + N], ai = 0, bi = 0, ci = 0;

    cout << "����ʮλ����������������a" << endl;
    for (ai = 0; ai < N; ai++)
        cin >> a[ai];
    cout << "������λ����������������b" << endl;
    for (bi = 0; bi < M; bi++)
        cin >> b[bi];

    ai = 0;
    bi = 0;

    // for (int ci = 0; ci < N + M; ci++)
    // {
    //     if (ai < N && bi < M)
    //     {
    //         if (a[ai] < b[bi])
    //         {
    //             c[ci] = a[ai];
    //             ai++;
    //         }
    //         else
    //         {
    //             c[ci] = b[bi];
    //             bi++;
    //         }
    //     }
    //     else if (ai == N) // ˵������a�Ѿ�ȫ���ϲ�������c����
    //     {
    //         c[ci] = b[bi];
    //         bi++;
    //     }
    //     else if (bi == M)
    //     {
    //         c[ci] = a[ai];
    //         ai++;
    //     }
    // }

    while (ai < N && bi < M)
    {
        if (a[ai] < b[bi])
        {
            c[ci] = a[ai];
            ai++;
        }
        else
        {
            c[ci] = b[bi];
            bi++;
        }
        ci++;
    }
    while (ai < N)
    {
        c[ci] = a[ai];
        ai++;
        ci++;
    }
    while (bi < M)
    {
        c[ci] = b[bi];
        bi++;
        ci++;
    }

    for (int ci = 0; ci < N + M; ci++)
    {
        cout << c[ci] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
