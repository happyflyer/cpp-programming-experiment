#include <iostream>
using namespace std;

int main()
{
    // �����Ǹ������������
    int fen_mu = 1, fen_zi = 2;
    double term; // �������е�ÿ��
    double sum = 0;
    int new_fen_zi; // ���ÿ��ѭ��ʱ�������·��ӣ����ڲ����·�������
    int N;
    cout << "��������Ҫ��͵�����N��";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        term = (double)fen_zi / fen_mu;
        // ������仰��ӡ�������е�ÿ��
        // cout << "��" << i + 1 << "��Ϊ��" << fen_zi << " / " << fen_mu << " = " << term << endl;
        sum += term;
        new_fen_zi = fen_zi + fen_mu; // �ɷ��Ӻ;ɷ�ĸ��ӣ��õ�һ���µ�����
        fen_mu = fen_zi;              // �Ѿɷ��Ӹ�ֵ���·�ĸ
        fen_zi = new_fen_zi;          // ���µ����ָ�ֵ���·���
    }
    cout << "�������еĺ�Ϊ��" << sum << endl;

    system("pause");
    return 0;
}
