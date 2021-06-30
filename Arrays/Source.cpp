#include<iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define TASK_0_1
//#define TASK_2

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_0_1
	const int n = 5;

	int arr[n];

	// ���� ��������� ������� � ����������
	cout << "������� �������� ��������� (" << n << ") ��.:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << endl;

	// ����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	// ����� ������� �� ����� � �������� �������
	for (int i = 0; i < n; i++)
	{
		cout << arr[n - i - 1] << tab;
	}
	cout << endl;

	//����� ���������
	int S = 0;
	int max = 0;
	int min = arr[n - 1];

	for (int i = 0; i < n; i++)
	{
		S = S + arr[i];

		if (arr[i] > max)
		{
			max = arr[i];
		}

		if (arr[i] < min)
		{
			min = arr[i];
		}

	}
	cout << endl;

	cout << "������������ ��������: " << max << endl;
	cout << "����������� ��������: " << min << endl;
	cout << "����� �����: " << S << endl;
	cout << "������� ��������������: " << (double)S / n << endl;
#endif // TASK_0_1

#ifdef TASK_2
	const int n = 10;

	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 }; // ������������� ������� �����
	int s; // �������� ������

	// ����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;


	cout << "������� �������� ������ ������� �����: "; cin >> s;

	for (int i = 0; i < n - s; i++)
	{
		cout << arr[i + s] << tab;
	}
	for (int i = 0; i < s; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;


	cout << "������� �������� ������ ������� ������: "; cin >> s;

	for (int i = n - s; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	for (int i = s; i < n; i++)
	{
		cout << arr[i - s] << tab;
	}
#endif // TASK_2

		
}