#include <iostream>
using namespace std;

int main()
{
    int n; // ����
    cout << "������ͼ����������" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
