#include <iostream>
using namespace std;

int main()
{
    const int N = 100;
    int a[N];
    int n;
    cout << "������n��";
    cin >> n;

    int max_a;
    int max_ai;
    int min_a;
    int min_ai;

    int sum = 0;
    double avg;

    if (n < N)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        /**
         * ɾ��һ�����������Ԫ��
         * ��һ�����Ҵ�����Ԫ�غ����Ԫ�ص��±�
         * �ڶ����������Ԫ�ص��±꿪ʼ������Ԫ������Ǩ�ƣ���������-1��ʵ��ɾ��
         */
        max_a = a[0];
        max_ai = 0;
        for (int i = 1; i < n; i++)
        {
            if (max_a < a[i])
            {
                max_a = a[i];
                max_ai = i;
            }
        }
        for (int i = max_ai; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n -= 1;
        /**
         * ɾ����СԪ��ͬ�����������
         * Ҫ�����³�������н��ǰ����ע�������ɾ�����������ֵ�ĳ���
         */
        min_a = a[0];
        min_ai = 0;
        for (int i = 1; i < n; i++)
        {
            if (min_a > a[i])
            {
                min_a = a[i];
                min_ai = i;
            }
        }
        for (int i = min_ai; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n -= 1;

        /**
         * ɾ��һ�������д��ڻ�С��ƽ��ֵ��Ԫ��
         * ��һ�������������ƽ��ֵ
         * �ڶ�����ѭ�������е�Ԫ�أ����Ԫ�ش��ڻ�С��ƽ��ֵ���ͰѸ�Ԫ�غ����Ԫ��������ǰ�ƶ�һλ
         * Ҫ�����³�������н��ǰ����ע������ĳ���
         */
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        avg = sum * 1.0 / n;
        cout << "�����ƽ��ֵΪ��" << avg << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > avg) // ��ʱɾ�������д���ƽ��ֵ��Ԫ��
            {
                for (int j = i; j < n - 1; j++)
                {
                    a[j] = a[j + 1];
                }
                n -= 1;
                i--; // ��Ϊ���±�i��ʼ�ĺ���Ԫ�ض���ǰ�ƶ���һλ����Ҫ���´��±�i��ʼѭ��
            }
        }

        /**
         * ɾ�������е�������ż��
         * Ҫ�����³�������н��ǰ����ע������ĳ���
         */
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0) // ��ʱɾ�������е�����
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
