//#include <iostream>
//using namespace std;
//int f(float hours, float st, float pr, float &sm, float &pn,float &zp)
//{
//	sm = hours * st*(1+pr/100);
//	pn = 13 * sm/100;
//	zp = sm - pn;
//	return 0;
//}
//int main()
//{
//	setlocale(LC_ALL, "");
//	float hours, st, pr, sm, pn, zp;
//	cout << "������� ���������� �����: ";
//	cin >> hours;
//	cout << "������� ������ ������ �� ���: ";
//	cin >> st;
//	cout << "������� ������� ������: ";
//	cin >>pr;
//	f(hours, st, pr, sm, pn, zp);
//	cout << "����� ����� " << sm<<endl;
//	cout << "����� ����������� ������ " << pn << endl;
//	cout << "����� � ������ ������ ������ " << zp << endl;
//}