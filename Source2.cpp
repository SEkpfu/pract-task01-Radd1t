//
//#include <iostream>
//using namespace std;
//float zarplata(float hours, float prem, float st)
//{
//	return (st * hours) * (1 + prem / 100);
//}
//float pnalog(float pr, float zp)
//{
//	return pr * zp / 100;
//}
//float ost(float sumpn, float zp)
//{
//	return zp - sumpn;
//}
//int main()
//
//{
//	setlocale(LC_ALL, "");
//	float hours, st, prem, zp,pn=13,nalog,os;
//	cout << "Введите кол-во отработанных часов, почасовую ставку и премиальный %\n";
//	cin >> hours >> st >> prem;
//	zp = zarplata(hours, prem, st);
//	nalog = pnalog(pn, zp);
//	os = ost(nalog, zp);
//	cout << "Подоходный налог=" << nalog << endl;
//	cout << "Зарплата с учетом налога=" << os;
//}