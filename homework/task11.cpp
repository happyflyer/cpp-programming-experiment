#include <iostream>
using namespace std;

int main()
{
    // ������p68ҳ��Ǯ�޳���
    // int n , i = 0, money = 2, sum = 0;
    // cout << "�Ѿ�����˶��ٸ����ڵ�Ǯ�ˣ�";
    // cin >> n;
    // cout << n << "�����ڹ��еĴ��" << endl;
    // do {
    //     sum = sum + money;
    //     cout << sum << "->";
    //     money = money + 2;
    //     i++;
    // } while (i < n);
    // cout << "\b  " << endl;
    // cout << "��ϲ��Ĵ�Ǯ�����Ѿ���" << sum << "ԪǮ��\n" << endl;

    // ��Ǯ�޳���ı�
    int n , i = 0, money, sum = 0;
    cout << "�Ѿ�����˶��ٸ����ڵ�Ǯ�ˣ�";
    cin >> n;
    do {
        cout << "��" << i + 1 << "����������Ǯ�޶���Ǯ��";
        cin >> money;
        sum += money;
        i++;
    } while (i < n);
    cout << "��ϲ��Ĵ�Ǯ�����Ѿ���" << sum << "ԪǮ��\n" << endl;

    // Ϊn��ѧ��д����
    int n, i, student_id, score;
    cout << "��ҪΪ���ٸ�ѧ��д���";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "��" << i + 1 << "��ѧ����ѧ�ţ�";
        cin >> student_id;
        cout << "��" << i + 1 << "��ѧ���ĳɼ���";
        cin >> score;
        cout << "���ѧ���ǣ�" << student_id << "��ĳɼ�Ϊ��";
        if (score > 90 && score < 100)
            cout << "A" << endl;
        if (score > 80 && score < 90)
            cout << "B" << endl;
        if (score > 70 && score < 80)
            cout << "C" << endl;
        if (score > 60 && score < 70)
            cout << "D" << endl;
    }

    system("pause");
    return 0;
}
