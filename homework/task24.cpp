#include <iostream>
using namespace std;

int main()
{
    // �׳�
    int a_n = 1;    // ��һ��
    int i = 0;      // ���ڼ���
    int n;          // �������n
    int result = 1; // �׳˵ĳ�ʼ�����������Ϊ1��������0
    cout << "������n��";
    cin >> n;
    do
    {
        result *= a_n;
        a_n++;
        i++;
    } while (i < n);
    cout << n << "! = " << result << endl;

    system("pause");
    return 0;
}
