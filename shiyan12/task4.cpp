#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    /**
     * ��̽�һά�����б����10������ѭ������mλ,
     * m��ֵ�ɼ������롣
     * ���磺
     * ����Ԫ��Ϊ��8,5,13,21,3,2,6,7,12,10��
     * m��ֵΪ3,
     * ���ƶ��������Ϊ��21,3,2,6,7,12,10,8,5,13��
     * Ҫ����ָ�뷽ʽ��������,������ֻ��ʹ��һ������
     */
    const int N = 10;
    int a[N], *pa;

    srand(time(NULL));
    for (pa = a; pa < a + N; pa++)
        *pa = 0 + rand() % (100 - 0 + 1);

    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    int m, *pm = &m;
    cout << "input m:";
    cin >> *pm;

    if (m > 0 && m < N)
    {
        // �����˼·�ǣ�ÿ���ƶ�һλ���ƶ�m��
        int temp;
        while (m > 0)
        {
            pa = a; // ������ָ��pa��a����ĵ�һλ
            temp = *pa;
            for (pa = a; pa < a + N - 1; pa++)
                *pa = *(pa + 1);
            *pa = temp; // ��ʱָ��pa��a��������һλ
            m--;
        }
    }

    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    system("pause");
    return 0;
}
