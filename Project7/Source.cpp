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
		cout << "�����i���: \n\n --- 10:10 ������� �� �������i�\n\n --- 11:50 ��������� ����������\n \n --- 13:30 ���.����i� \n";
		break;
	case 2:
		cout << "�i������: \n\n --- 10:10 ��������� �������� \n --- 11:50 ����.����\n";
		break;
	case 3:
		cout << "������: \n\n --- 8:30 ������������� \n --- 10:10 ���I \n --- 11:50 ������� �� �������i�\n";
		break;
	case 4:
		cout << "������: \n\n --- 8:30 ����.���� \n --- 10:10 ������������� \n --- 11:50 ��Ų \n --- 14:00 Գ�.��������\n";
		break;
	case 5:
		cout << "�'������: \n\n --- 8:30 ���.����i� \n --- 10:10 ��������� ���������� \n --- 11:50 ���.����i�\n";
		break;
	default:
		std::cout << "���i����";
		break;
	
	}


	cout << endl << endl;
	return 0;
}