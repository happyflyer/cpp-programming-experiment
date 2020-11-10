#include <iostream>
using namespace std;

int main()
{
    // 计算日期为该年份的第几天
    int year, month, day,num=0;
	cout << "请分别输入年月日:";
	cin >> year >> month >> day;
	switch (month)
	{
	case 12:
		num += 30;
	case 11:
		num += 31;
	case 10:
		num += 30;
	case 9:
		num += 31;
	case 8:
		num += 31;
	case 7:
		num += 30;
	case 6:
		num += 31;
	case 5:
		num += 30;
	case 4:
		num += 31;
	case 3:
		num += 28;
	case 2:
		num += 31;
	case 1:
		num += 0;
	}
	num = num + day;
	if ((year % 4 == 0 && year % 100 != 0 ) || (year % 100 == 0 && year % 400 == 0))
	{
		if (month == 2)
			num++;
	}
	
	cout << "这是" << year << "年的第" << num << "天" << endl;

    system("pause");
    return 0;
}
