#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int x;   
	int min_y; 
	int max_y; 
	int SoDA; 
	int SLoA; 

	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	while (true)
	{
		cout << "Введите минимальное число: ";
		cin >> min_y;

		cout << "Введите максимальное число: ";
		cin >> max_y;

		while (max_y - min_y < 0)
		{
			cout << "Указано число меньше минимального. Повторите ввод: ";
			cin >> max_y;
		}

		SoDA = max_y + 1 - min_y;

		cout << "Желаемый размер массива (от 1 до " << SoDA << "): ";
		cin >> SLoA;

		while (SLoA > SoDA || SLoA <= 0)
		{
			cout << "Неподходящее значение. Повторите ввод: ";
			cin >> SLoA;
		}


		int* Cells = new int[SoDA];

		cout << endl;

		for (int i = 0; i < SoDA; i++)
		{
			Cells[i] = min_y - 1;
		}


		for (int i = min_y; i <= max_y; i++)
		{
			x = rand() % SoDA;

			while (Cells[x] != min_y - 1)
			{
				if (x < SoDA - 1)
				{
					x++;
				}
				else
				{
					x = 0;
				}
			}
			Cells[x] = i;
		}




		for (int i = (SoDA - SLoA) / 2; i < (SoDA + SLoA) / 2; i++)
		{
			if (i % 10 == 0)
			{
				cout << endl;
			}

			if (Cells[i] >= 0)
			{
				cout << Cells[i] << "\t";
			}
			else
			{
				cout << Cells[i] << "\t";
			}
		}

		delete[] Cells;

	}
	return 0;
}
