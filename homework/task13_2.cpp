#include <iostream>
using namespace std;

int get_max_factor(int a, int b)
{
    int a_b;
    do
    {
        a_b = a % b;
        a = b;
        b = a_b;
    } while (a_b != 0);
    return a;
}

int main()
{
    // ���Ҳ�Ƿ������
    // ��֤һ���Ƿ���ڷ����м���������ù�
    // ���֤���м�������û�����
    // ���������󣬲�Ӱ����
    int fen_mu_of_term = 1, fen_zi_of_term = 2, new_fen_zi_of_term;
    int fen_mu_of_sum = 1, fen_zi_of_sum = 0;
    int fen_mu_temp, fen_zi_temp, max_factor_temp;
    int n;
    cout << "��������Ҫ��͵�����N��";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "��" << i + 1 << "��Ϊ��\t\t\t" << fen_zi_of_term << " / " << fen_mu_of_term << endl;
        fen_zi_temp = fen_zi_of_sum * fen_mu_of_term + fen_mu_of_sum * fen_zi_of_term;
        fen_mu_temp = fen_mu_of_sum * fen_mu_of_term;
        max_factor_temp = get_max_factor(fen_zi_temp, fen_mu_temp);
        fen_zi_of_sum = fen_zi_temp / max_factor_temp;
        fen_mu_of_sum = fen_mu_temp / max_factor_temp;
        cout << "ǰ" << i + 1 << "��ĺ�Ϊ��\t\t" << fen_zi_of_sum << " / " << fen_mu_of_sum << endl;
        new_fen_zi_of_term = fen_zi_of_term + fen_mu_of_term;
        fen_mu_of_term = fen_zi_of_term;
        fen_zi_of_term = new_fen_zi_of_term;
    }
    cout << "�������еĺ�Ϊ��" << fen_zi_of_sum << " / " << fen_mu_of_sum << " = " << (double)fen_zi_of_sum / fen_mu_of_sum << endl;
}
