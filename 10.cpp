//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "");
//	const int workers = 4, months = 12;
//	float hours[workers][months], stavka[workers], pn[workers][months],
//		sm[workers][months], zp[workers][months],pr,all[workers][months][3],summanaloga=0;
//	cout << "������� �����������%\n";
//	cin >> pr;
//	for (int i = 0;i < workers;i++)
//	{
//		cout << "������� ��������� ������ ��� ��������� " << i + 1 << endl;
//		cin >> stavka[i];
//		for (int j = 0; j < months; j++)
//		{
//			cout << "������� ���������� ������������ ����� ��� ��������� " << i + 1<< " � ������ " << j + 1 << endl;
//			cin >> hours[i][j];
//		}
//	}
//	for (int i = 0;i < workers;i++)
//	{
//		for (int j = 0;j < months;j++)
//		{
//			all[i][j][0] = stavka[i] * hours[i][j] * (1 + pr / 100);              //sum
//			all[i][j][1] = all[i][j][0] * 0.13;   ///pn
//			all[i][j][2] = all[i][j][0] - all[i][j][1]; /// zp
//		}
//			
//	}
//	cout << "�����, ���������� ������ ���������� �� ���� �� ������ ������ = " << all[0][1][2]<<"���.\n";
//	for (int i = 0; i < months;i++)
//	{
//		summanaloga += all[2][i][1];
//	}
//	cout << "����� ����� ������ � 3 ��������� �� ���� ��� " << summanaloga<<" ���.\n";
//	float mx = all[0][2][2],nbolshe=0,brigada=0;
//	for (int i = 1; i < workers; i++)
//	{
//		if (all[i][2][2] > mx)
//		{
//		mx = all[i][2][2];
//		nbolshe = i;
//		}
//	}
//	cout << "������ ���� ��������� � 3 ������ �������� ��� ������� " << nbolshe+1 << endl;
//	for (int i = 0; i < workers;i++)
//	{
//		for (int j = 0;j < months;j++)
//		{
//			brigada += all[i][j][2];
//		}
//	}
//	cout << "��� ������� ���������� �� ��� " << brigada<<" ���.\n";
//}