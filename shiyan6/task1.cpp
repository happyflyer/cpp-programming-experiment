#include <iostream>
using namespace std;

int main()
{
    int class_num;   // �༶����
    int student_num; // ѧ������
    double student_id;
    double chinese, math, english;
    cout << "������༶������";
    cin >> class_num;
    for (int i = 0; i < class_num; i++)
    {
        cout << "================================" << endl;
        cout << "�������" << i + 1 << "���ѧ��������";
        cin >> student_num;
        for (int j = 0; j < student_num; j++)
        {
            cout << "�������" << j + 1 << "��ѧ����ѧ�š����ġ���ѧ��Ӣ��ɼ���" << endl;;
            cin >> student_id >> chinese >> math >> english;
            cout << "ѧ��" << student_id;
            if (chinese > math && chinese > english)
                cout << "���ĳɼ��ã����ĳɼ�Ϊ��" << chinese << endl;
            else if (math > english)
                cout << "��ѧ�ɼ��ã���ѧ�ɼ�Ϊ��" << math << endl;
            else
                cout << "Ӣ��ɼ��ã�Ӣ��ɼ�Ϊ��" << english << endl;
        }
    }

    system("pause");
    return 0;
}
