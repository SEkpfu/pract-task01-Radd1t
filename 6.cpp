//#include <string>
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
//	setlocale(LC_ALL, "Rus");
//	float k1, k2, st1, st2, pr, sm1, pn1, zp1, sm2, pn2, zp2;
//	string surname1, surname2;
//	cout << "¬ведите данные о работнике номер 1 (‘амили€(<=20 символов), кол-во часов, ставка/час)\n";
//
//	cin >> surname1 >> k1 >> st1;
//	cout << "¬ведите данные о работнике номер 2 (‘амили€(<=20 символов), кол-во часов, ставка/час)\n";
//	cin >> surname2 >> k2 >> st2;
//	cout << "¬ведите премиальный%\n";
//	cin >> pr;
//	f(k1, st1, pr, sm1, pn1, zp1);
//	f(k2, st2, pr, sm2, pn2, zp2);
//	if (zp1 < 1000)
//	{
//		cout << surname1 << " заработал меньше 1000 руб." << endl;
//	}
//	if (zp2 < 1000)
//	{
//		cout << surname2 << "заработал меньше 1000 руб." << endl;
//	}
//	if (pn1 > 50)
//	{
//		cout << surname1.substr(0,1) << "-" << surname1.substr(surname1.length()-1,1) << "заплатил налог больше 50 руб." << endl;
//	}
//	if (pn2 > 50)
//	{
//		cout << surname2.substr(0, 1) << "-" << surname2.substr(surname2.length() - 1, 1) << "заплатил налог больше 50 руб." << endl;
//	}
//}