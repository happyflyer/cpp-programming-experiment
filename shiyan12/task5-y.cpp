//������ڵ������ĸ���֮�ͣ������
#include <iostream>
using namespace std;
int main()
{
    // ʹ��ָ��汾
    const int N = 10; // ���鳤��
    int m = 4;        // Ҫ����������ӵ����ָ���
    int a[N];         // �洢���������
    int b[N];         // �洢��͵Ľ��
    int *pa = a;
    int *pb = b;

    cout << "�����е�Ԫ��Ϊ��" << endl;
    // ��һ�����������ֲ��浽����a��
    for (pa = a; pa < a + N; pa++)
        cin >> *pa;
    // �ڶ�����������b�е�Ԫ��ȫ������ֵΪ0������ΪʲôҪ������
    for (pb = b; pb < b + N; pb++)
        *pb = 0;
    // ������������ѭ������a�е�Ԫ�أ���������Ľ���浽����b�еĶ�Ӧλ��
    // ������Ҫע����ǣ�paָ���ƶ���ʱ��pbָ��Ҫ����һ���ƶ�
    for (pa = a, pb = b; pa < a + N; pa++, pb++)
    {
        for (int *pi = pa; pi < pa + m; pi++)
            // *pb += *pi; // ����Ӧ������д����������������β�������ᷢ��piָ��Խ��
            *pb += *(a + (pi - a) % 10);
    }
    // ���Ĳ����������b
    cout << "����4����֮�ͷֱ��ǣ�" << endl;
    for (pb = b; pb < b + N; pb++)
        cout << *pb << " ";
    cout << endl;

    // ���岽��������b�е����ֵ
    pb = b; // ÿ��ʹ��ָ��֮ǰ���Ȱ�ָ��ָ����������ָ���λ��
    int max = *pb;
    int max_i = 0;
    for (pb = b + 1; pb < b + N; pb++)
    {
        if (max < *pb)
        {
            max = *pb;
            max_i = pb - b; // ����Ҫ��¼����b�����ֵ���±�
        }
    }
    cout << "���ĺ�ֵ�ǣ�" << max << endl;

    // ����������max_i��ʼ����������ĸ�Ԫ��
    cout << "������͵��ĸ����ǣ�";
    pa = a + max_i;
    for (int j = 0; j < m; j++)
        // cout << *(pa + j) << " "; // ����д�ᷢ��(pa + j)ָ��Խ��
        cout << *(a + (pa + j - a) % 10) << " ";
    cout << endl;
    return 0;
}
