#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    /**
     * ��һ��������
     * ��������ʽΪ��8��5��13��15��3��11��6��7��22��10��
     * ��β����10��ͷ����8��β����������һ�����Ρ�
     * ���������ڵ������ĸ���֮�ͣ��������
     * Ȼ���ҳ����֮�������ĸ����������͵Ľ���Լ����ĸ�����
     * Ҫ����ָ�뷽ʽ�������顣�������н����������ͼ��
     * ʵ�鱨���е����н����ͼ����������ͼ�е�����һ����
     */
    const int N = 10;
    int a[N], *pa;

    srand(time(NULL));
    for (pa = a; pa < a + N; pa++)
        // *pa = 0 + rand() % (100 - 0 + 1);
        *pa = (pa - a);

    cout << "�����е�Ԫ��Ϊ��" << endl;
    for (pa = a; pa < a + N; pa++)
        cout << *pa << " ";
    cout << endl;

    int m, *pm = &m;
    *pm = 4; // m = 4

    int b[N], *pb; // �����ͽ��
    for (pb = b; pb < b + N; pb++)
        *pb = 0;

    for (pa = a, pb = b; pa < a + N; pa++, pb++)
        for (int *pi = pa; pi < pa + *pm; pi++)
            // ��һ���ǹؼ�����Nȡ������ʵ������β����
            *pb += *(a + (pi - a) % N);

    cout << "����" << *pm << "����֮�ͷֱ��ǣ�" << endl;
    for (pb = b; pb < b + N; pb++)
        cout << *pb << " ";
    cout << endl;

    pb = b; // pbָ������
    int max_b = *pb, *pmax_b = &max_b;
    int max_bi = 0, *pmax_bi = &max_bi;
    for (pb = b + 1; pb < b + N; pb++)
        if (*pmax_b < *pb)
        {
            *pmax_b = *pb;
            *pmax_bi = pb - b;
        }
    cout << "���ĺ�ֵ�ǣ�" << *pmax_b << endl;

    cout << "������͵�" << *pm << "�����ǣ�";
    for (pa = a + *pmax_bi; pa < a + *pmax_bi + *pm; pa++)
        cout << *pa << " ";
    cout << endl;

    system("pause");
    return 0;
}
