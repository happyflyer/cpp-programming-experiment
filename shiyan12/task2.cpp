#include <iostream>
using namespace std;

int main()
{
    /**
     * ͳ��һά�����������ܱ�3������Ԫ�ظ������������
     * Ҫ������Ԫ���ɼ������룻��ָ�뷽ʽ�������顣
     */
    const int N = 10;
    int a[N], *pa;
    // ��һ������ָ�������ֵ��ʽ
    // pa = &a[0];
    // �ڶ�������ָ�������ֵ��ʽ
    // pa = a;

    for (pa = a; pa < a + N; pa++)
        cin >> *pa;

    for (pa = a; pa < a + N; pa++)
        if (*pa % 3 == 0)
            cout << *pa << " ";
    cout << endl;

    system("pause");
    return 0;
}
