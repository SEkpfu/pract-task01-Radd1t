//#include <iostream>
//using namespace std;
//int f(float hours, float st, float pr, float& sm, float& pn, float& zp)
//{
//	sm = hours * st * (1 + pr / 100);
//	pn = 13 * sm / 100;
//	zp = sm - pn;
//	return 0;
//}
//int main()
//{
//	setlocale(LC_ALL, "");
//	float pr,obsh=0;
//	cout << "������� ����������� %\n";
//	cin >> pr;
//	for (int i = 1; i < 6; i++)
//	{
//		cout << "������� ���-�� ����� � ��������� ������ ��������� ����� " << i << endl;
//		float h, st,sm,pn,zp;
//		cin >> h >> st;
//		f(h, st, pr, sm, pn, zp);
//		obsh += zp;
//	}
//	cout << "����� ����� = " << obsh << " ���.\n";
//	cout << "������� �� = " << obsh / 5 << " ���.\n";
//}
