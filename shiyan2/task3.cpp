#include <iostream>
using namespace std;

int main()
{
    cout << "������һ��Сд��ĸ��";
    char a;
    cin >> a;
    cout << "�����Сд��ĸ�ǣ�" << (char)a << "����ASCII���ǣ�" << (int)a << endl;
    cout << "�����Сд��ĸ�ǣ�" << (char)(a - 32) << "����ASCII���ǣ�" << (int)a - 32 << endl;

    system("pause");
    return 0;
}
