#include <iostream>
using namespace std;

int main()
{
    // ��һ�������е����ֵ����Сֵ����λ��
    const int N = 10;
    int a[N];
    cout << "������" << N << "����������" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int max_a = a[0];
    int max_ai = 0;
    int min_a = a[0];
    int min_ai = 0;
    for (int i = 1; i < N; i++)
    {
        if (max_a < a[i])
        {
            max_a = a[i];
            max_ai = i;
        }
        if (min_a > a[i])
        {
            min_a = a[i];
            min_ai = i;
        }
    }

    a[max_ai] = min_a;
    a[min_ai] = max_a;

    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
