//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "");
//	const int workers = 4, months = 12;
//	float hours[workers][months], stavka[workers], pn[workers][months],
//		sm[workers][months], zp[workers][months],pr,all[workers][months][3],summanaloga=0;
//	cout << "¬ведите премиальный%\n";
//	cin >> pr;
//	for (int i = 0;i < workers;i++)
//	{
//		cout << "¬ведите почасовую ставку дл€ работника " << i + 1 << endl;
//		cin >> stavka[i];
//		for (int j = 0; j < months; j++)
//		{
//			cout << "¬ведите количество отработанных часов дл€ работника " << i + 1<< " в мес€це " << j + 1 << endl;
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
//	cout << "—умма, полученна€ первым работником на руки во втором мес€це = " << all[0][1][2]<<"руб.\n";
//	for (int i = 0; i < months;i++)
//	{
//		summanaloga += all[2][i][1];
//	}
//	cout << "ќбща€ сумма налога у 3 работника за весь год " << summanaloga<<" руб.\n";
//	float mx = all[0][2][2],nbolshe=0,brigada=0;
//	for (int i = 1; i < workers; i++)
//	{
//		if (all[i][2][2] > mx)
//		{
//		mx = all[i][2][2];
//		nbolshe = i;
//		}
//	}
//	cout << "Ѕольше всех заработал в 3 мес€це работник под номером " << nbolshe+1 << endl;
//	for (int i = 0; i < workers;i++)
//	{
//		for (int j = 0;j < months;j++)
//		{
//			brigada += all[i][j][2];
//		}
//	}
//	cout << "¬с€ бригада заработала за год " << brigada<<" руб.\n";
//}