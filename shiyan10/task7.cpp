#include <iostream>
using namespace std;

int main()
{
    const int N = 100;
    char a[N];
    int n;
    cout << "������n��";
    cin >> n;

    char c; // Ҫɾ�����ַ����ɼ��������

    if (n < N)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "������c��";
        cin >> c;
        for (int i = 0; i < n; i++)
        {
            if (c == a[i])
            {
                for (int j = i; j < n - 1; j++)
                {
                    a[j] = a[j + 1];
                }
                n -= 1;
                i--; // ��Ϊ���±�i��ʼ�ĺ���Ԫ�ض���ǰ�ƶ���һλ����Ҫ���´��±�i��ʼѭ��
            }
        }

        // ��ӡ����a
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
