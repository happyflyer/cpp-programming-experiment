#include <iostream>
using namespace std;

int main()
{
    // ɾ�����������е��ظ�Ԫ��
    const int N = 10;
    // int a[N] = {3, 4, 8, 7, 5};
    int a[N];
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int avg = sum / N;
    cout << "avg: " << avg << endl;

    int n = N; // ��¼ɾ������Ԫ�غ�����a�ĳ���
    for (int i = 0; i < n; i++)
    {
        if (a[i] < avg)
        {
            // ���±�i��ʼ���������е�Ԫ�ض���ǰ�ƶ�һλ
            // ��һ�������ǣ�a[i] = a[i + 1]
            // ���һ�������ǣ�a[n - 2] = a[n - 1]
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            // ��Ϊ����Ԫ�س���ǰ�ƶ���һλ���������鳤��-1
            n--;
            // a[i]λ�õ�Ԫ�ص�ֵ�仯�ˣ������´�ѭ����ʱ�򣬻������i
            i--;
        }
    }

    cout << "n: " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
