#include <iostream>
using namespace std;

// 测试一下折半查找法
int binary_search(int a[], const int n, const int x)
{
    int left = 0, right = n - 1;
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        cout << "left=" << left << ",mid=" << mid << ",right=" << right << endl;
        if (*(a + mid) == x)
            return mid;
        else if (*(a + mid) < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    const int N = 10;
    int a[N], *pa = a;
    for (pa = a; pa < a + N; pa++)
    {
        *pa = pa - a;
        cout << *pa << " ";
    }
    cout << endl;

    int x;
    cout << "input x:";
    cin >> x;

    int pos = binary_search(a, N, x);
    cout << "pos=" << pos << endl;

    system("pause");
    return 0;
}
