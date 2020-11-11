#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int xd;
	cout << "Choose day of week";
	cin >> xd;
	switch (xd)
	{
	case 1:
		cout << "Понедiлок: \n\n --- 10:10 Алгебра та геометрiя\n\n --- 11:50 Дискретна математика\n \n --- 13:30 Мат.аналiз \n";
		break;
	case 2:
		cout << "Вiвторок: \n\n --- 10:10 Навчальна практика \n --- 11:50 Англ.мова\n";
		break;
	case 3:
		cout << "Середа: \n\n --- 8:30 Програмування \n --- 10:10 ООЕI \n --- 11:50 Алгебра та геометрiя\n";
		break;
	case 4:
		cout << "Четвер: \n\n --- 8:30 Англ.мова \n --- 10:10 Програмування \n --- 11:50 ООЕІ \n --- 14:00 Фіз.культура\n";
		break;
	case 5:
		cout << "П'ятниця: \n\n --- 8:30 Мат.аналiз \n --- 10:10 Дискретна математика \n --- 11:50 Мат.аналiз\n";
		break;
	default:
		std::cout << "Day off";
		break;
	
	}


	cout << endl << endl;
	return 0;
}