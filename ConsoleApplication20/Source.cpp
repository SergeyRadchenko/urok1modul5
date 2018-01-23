#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;
#define size8 8
void main()
{
	setlocale(LC_ALL, "rus");
	
	srand(time(NULL));

	/*int a{ 7 } = 37, 0, 50, 46, 34, 46, 0, 13;*/
	int o, p;

	do
	{
		cout << "Введите задание:";
		cin >> o;
		switch (o)
		{
		case 1:
		{
			//1.	Дан массив.Вывести на экран сначала его неотрицательные элементы, затем отрицательные
			int a[10];
			for (int i = 0; i < 10; i++)
			{
				a[i] = -10 + rand() % 20;
			}
			for (int i = 0; i < 10; i++)
			{
				if (a[i] > 0)
				{
					cout << i <<"=" << a[i] << endl;
				}
			}
			for (int i = 0; i < 10; i++)
			{
				if (a[i] < 0)
				{
					cout << i <<" = " << a[i] << endl;
				}
			}
		}
		break;
		case 2:
		{
			/*2.	В массиве хранится информация о количестве побед, одержанных 20 футбольными командами.
				Определить номера команд, имеющих меньше трех побед.*/
			int a[20];
			int schet = 0;
			for (int i = 0; i < 20; i++)
			{
				a[i] = -5 + rand() % 10;
				
			}
			for (int i = 0; i < 20; i++)
			{
				
				if (a[i] < 3)
				{
					schet++;
					
				}

			}
			cout << schet << " Команд имеющих меньше 3х побед." << endl;
		}
		break;
		case 3:
		{
			//3.	Ввести массив, состоящий из 14 элементов целого типа.Найти количество элементов четных по значению.
			int a[14];
			
			for (int i = 0; i < 14; i++)
			{
				a[i] = 5 + rand() % 20;

			}
			for (int i = 0; i < 14; i++)
			{
				if (a[i] % 2 == 0)
				{
					cout << i << "=" << a[i] << ","<<endl;
				}
			}
		}
		break;
		case 4:
		{
			/*4.	Ввести массив, состоящий из 12 элементов целого типа.
				Получить новый массив, заменив значение пятого элемента среднеарифметическим исходного массива*/
			int a[12];
			int srednestat, sum=0;
			for (int i = 0; i < 12; i++)
			{
				a[i] = 5 + rand() % 60;
				sum = sum + a[i];
			}
			srednestat = sum / 12;
			
			a[5] = srednestat;
			cout << a[5] << endl;

		}
		break;
		case 5:
		{
			/*5.	Задан массив, состоящий из 15 элементов вещественного типа.
				Определить количество элементов, значения которых больше первого элемента*/

			int a[15];
			
		int	schet = 0;
			for (int i = 0; i < 15; i++)
			{
				a[i] = -10 + rand() % 20;
			
			}
			for (int i = 0; i < 15; i++)
			{
				if (a[i] > a[0])
				{
					schet++;
					cout << i << "=" << a[i] << endl;
				}
			}
cout << schet << " - Элементов больше чем первый элемент. "<< endl;
		}
		break;
		
		default:
			break;
		}


		cout << "Хотите еще (1)ДА (2)Нет";
		cin >> p;
	} while (p==1);




}