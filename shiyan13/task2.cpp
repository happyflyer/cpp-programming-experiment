#include <iostream>
using namespace std;

int binary_sqrt(int n)
{
    int left = 1, right = n;
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        // cout << "left=" << left << ",mid=" << mid << ",right=" << right << endl;
        if (mid * mid == n)
            return mid;
        else if (mid * mid < n)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// ��дһ�Ӻ�����
// �ж�������Ȼ��x,y�Ƿ�����Ȼ����
// ����ν��Ȼ������ָ������Ȼ���ĺ�����ƽ������
// �磺17-8=9,17+8=25��
bool is_pair(int x, int y)
{
    if (binary_sqrt(x + y) > 0 && binary_sqrt(x - y) > 0)
        return true;
    return false;
}

int main()
{
    // ����
    // int x;
    // cout << "input x:";
    // cin >> x;
    // cout << binary_sqrt(x) << endl;

    // �����Ӻ�����0<x<=50,0<y<=50��x!=y��Χ���ҳ�ȫ����Ȼ����
    // ����������x>y
    const int N = 50;
    for (int i = 0; i <= N; i++)
        for (int j = i + 1; j <= N; j++)
            if (is_pair(j, i))
                cout << "x=" << j << ",y=" << i << ",x+y=" << i + j << ",x-y=" << j - i << endl;

    system("pause");
    return 0;
}
