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
//	const int mx = 100;//������a����� ����� ����������
//	float pr, mn, Nmn, max, Nmax, kl = 0;
//	int n;
//	cout << "������� ���-�� �������������\n";
//	cin >> n;
//	cout << "������� �����������%\n";
//	cin >> pr;
//	float k[mx], st[mx];
//	for (int i = 0; i < n; i++)
//	{
//		cout << "������� ���������� ����� � ������ ��� ��������� " << i<<endl;
//		cin >> k[i] >> st[i];
//	}
//	float zp[mx], pn[mx], sm[mx], over50k[mx], obsh = 0;
//	for (int i = 0; i < n; i++)
//	{
//		f(k[i], st[i], pr, sm[i], pn[i], zp[i]);
//		over50k[i] = 0;
//	}
//	mn = zp[0];
//	Nmn = 0;
//	max = zp[0];
//	Nmax = 0;
//	for (int i = 1;i < n;i++)
//	{
//		if (zp[i] < mn)
//		{
//			Nmn = i;
//			mn = zp[i];
//
//		}
//		if (zp[i] > max)
//		{
//			max = zp[i];
//			Nmax = i;
//		}
//	}
//	for (int i = 0;i < n;i++)
//	{
//		if (zp[i] > 50000)
//		{
//			kl++;
//			over50k[i] = 1;
//
//		}
//		obsh += pn[i];
//	}
//	cout << "�������� " << Nmn+1 << " ������� ������ ����\n";
//	cout<< "�������� " << Nmax+1 << " ������� ������ ����, � ������ "<<max<<" ���.\n";
//	if (kl > 0)
//	{
//	cout << "��������� � ���������� " << kl << " ������� �������� ����� 50000 ���., � ������ ��������� ��� ��������:\n";
//		for (int i = 0;i < n;i++)
//		{
//			if (over50k[i] == 1)
//			{
//				cout << i+1<<" ";
//			}
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << "����� �� ������� ����� 50000 ���.\n";
//	}
//	
//	cout << "����� ����� ������, ���������� ���� �������� = " << obsh<<" ���.\n";
//
//
//}