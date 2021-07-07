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

	// Ввод элементов массива с клавиатуры
	cout << "Введите значения элементов (" << n << ") шт.:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << endl;

	// Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	// Вывод массива на экран в обратном порядке
	for (int i = 0; i < n; i++)
	{
		cout << arr[n - i - 1] << tab;
	}
	cout << endl;

	//Сумма элементов
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

	cout << "Максимальное значение: " << max << endl;
	cout << "Минимальное значение: " << min << endl;
	cout << "Сумма равна: " << S << endl;
	cout << "Среднее арифметическое: " << (double)S / n << endl;
#endif // TASK_0_1

#ifdef TASK_2
	const int n = 10;

	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 }; // Инициализация массива рядом
	int s; // Величина сдвига

	// Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;


	cout << "Введите значение сдвига массива влево: "; cin >> s;

	for (int i = 0; i < n - s; i++)
	{
		cout << arr[i + s] << tab;
	}
	for (int i = 0; i < s; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;


	cout << "Введите значение сдвига массива вправо: "; cin >> s;

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