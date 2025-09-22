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
//	cout << "¬ведите количество часов: ";
//	cin >> hours;
//	cout << "¬ведите ставку оплаты за час: ";
//	cin >> st;
//	cout << "¬ведите процент премии: ";
//	cin >>pr;
//	f(hours, st, pr, sm, pn, zp);
//	cout << "ќбща€ сумма " << sm<<endl;
//	cout << "—умма подоходного налога " << pn << endl;
//	cout << "—умма с учетом вычета налога " << zp << endl;
//}