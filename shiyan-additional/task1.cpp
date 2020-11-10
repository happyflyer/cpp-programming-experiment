#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// �ж�����
bool is_prime(int num)
{
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return 0;
    return 1;
}

// �����ж�����
// bool is_prime(int num)
// {
//     if (num == 2 || num == 3)
//         return 1;
//     if (num % 6 != 1 && num % 6 != 5)
//         return 0;
//     for (int i = 5; i <= num / 2; i += 6)
//         if (num % i == 0 || num % (i + 2) == 0)
//             return 0;
//     return 1;
// }

// ����һ���ж�ĳ���Ƿ�Ϊ�������Ӻ���prime��
// �ø��Ӻ����ж������е�������
// �������Щ������
void print_prime(int a[], int n)
{
    for (int *pa = a; pa < a + n; pa++)
        if (is_prime(*pa))
            cout << setw(4) << *pa;
    cout << endl;
}

int main()
{
    // ����һ��int��ά����a,����ΪN��
    // ����NΪ���ų�����ע��NֵӦ�������²������󣩡�
    // ���������飬�������������
    const int N = 100;
    // �������n��10-100���ڵ�������������a�У�����n<N����
    // ������ÿ�����5���ĸ�ʽ����������飻
    int n;
    cout << "��������������ĸ�����<100����";
    cin >> n;
    int a[n], *pa;

    if (n < N)
    {
        srand(time(NULL));
        for (pa = a; pa < a + n; pa++)
        {
            *pa = 10 + rand() % (100 - 10 + 1);
            cout << setw(4) << *pa;
            if ((pa - a + 1) % 5 == 0)
                cout << endl;
        }

        cout << "���е�����Ϊ��" << endl;
        print_prime(a, n);
    }

    system("pause");
    return 0;
}
