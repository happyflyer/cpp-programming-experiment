//������ڵ������ĸ���֮�ͣ������
#include <iostream>
using namespace std;
int main()
{
    // ��ʹ��ָ��汾
    const int N = 10; // ���鳤��
    int m = 4;        // Ҫ����������ӵ����ָ���
    int a[N];         // �洢���������
    int b[N];         // �洢��͵Ľ��

    cout << "�����е�Ԫ��Ϊ��" << endl;
    // ��һ�����������ֲ��浽����a��
    for (int i = 0; i < N; i++)
        cin >> a[i];
    // �ڶ�����������b�е�Ԫ��ȫ������ֵΪ0������ΪʲôҪ������
    for (int i = 0; i < N; i++)
        b[i] = 0;
    // ������������ѭ������a�е�Ԫ�أ���������Ľ���浽����b�еĶ�Ӧλ��
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < m; j++)
            b[i] += a[(i + j) % N];
    }
    // ���Ĳ����������b
    cout << "����4����֮�ͷֱ��ǣ�" << endl;
    for (int i = 0; i < N; i++)
        cout << b[i] << " ";
    cout << endl;

    // ���岽��������b�е����ֵ
    int max = b[0];
    int max_i = 0;
    for (int i = 1; i < N; i++) // �����1��ʼ������Ϊʲô
    {
        if (max < b[i])
        {
            max = b[i];
            max_i = i; // ����Ҫ��¼����b�����ֵ���±�
        }
    }
    cout << "���ĺ�ֵ�ǣ�" << max << endl;

    // ����������max_i��ʼ����������ĸ�Ԫ��
    cout << "������͵��ĸ����ǣ�";
    for (int i = max_i, j = 0; j < m; j++)
        cout << a[(i + j) % N] << " ";
    cout << endl;
    return 0;
}
