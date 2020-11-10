#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int N = 10;
    int a[N];

    // ��1��	����rand()��������10��10~100֮�����������������a�в������
    cout << "10��10~100����������Ϊ��" << endl;
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        a[i] = 10 + rand() % (100 - 10 + 1);
        cout << a[i] << " ";
    }
    cout << endl;

    // ��2��	ʹ��ð�����򷨣�������a�е����ݰ��������У��������
    int i, j, temp;
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "���Ӵ�С���еĽ��Ϊ��" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // ��3��	ʹ���۰���ҷ�������a�в����Ƿ��м��������ָ�����ݣ�
    // ��������ҽ��ۣ�û�ҵ����ڵ�X��λ���ҵ�����
    cout << "������Ҫ���ҵ�����";
    int x;
    cin >> x;
    int find(int a[], int min_ai, int max_ai, int target_value); // ��������
    int target_ai = find(a, 0, N, x);                            // ��������
    if (target_ai >= 0)
    {
        cout << x << "�ڵ�" << target_ai + 1 << "��λ��" << endl; // λ��=�±�+1
    }
    else
    {
        cout << x << "��������δ�ҵ�" << endl;
    }

    system("pause");
    return 0;
}

// �۰���ҷ������target_value������a�������ҵ�����������λ���±꣬����Ҳ���������-1
// a[]�ǴӴ�С���С�����һ����������
// min_ai�ǲ��ҷ�Χ����С�±�
// min_ai�ǲ��ҷ�Χ������±�
// target_value�ǲ��ҵ�Ŀ��ֵ
/**
 * �۰���ҷ����÷�Χ����������
 * ÿ�αȽ�Ŀ����м�ֵ��
 * ���Ŀ��ֵ���м�ֵ�����С�����ҷ�Χ�ͼ���
 * ���Ŀ��ֵ���м�ֵ��Ⱦ�˵���ҵ�
 * �����������ǲ��ҷ�Χ��С��0
 * �����Χ��СΪ0��û���ҵ�����˵���Ҳ���Ŀ��ֵ
 */
int find(int a[], int min_ai, int max_ai, int target_value) // ��������
{
    while (min_ai <= max_ai)
    {
        int mid_ai = (min_ai + max_ai) / 2;
        if (a[mid_ai] > target_value)
        {
            min_ai = mid_ai + 1;
        }
        else if (a[mid_ai] < target_value)
        {
            max_ai = mid_ai - 1;
        }
        else
        {
            return mid_ai;
        }
    }
    return -1;
}
