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
		cout << "������� �������:";
		cin >> o;
		switch (o)
		{
		case 1:
		{
			//1.	��� ������.������� �� ����� ������� ��� ��������������� ��������, ����� �������������
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
			/*2.	� ������� �������� ���������� � ���������� �����, ���������� 20 ����������� ���������.
				���������� ������ ������, ������� ������ ���� �����.*/
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
			cout << schet << " ������ ������� ������ 3� �����." << endl;
		}
		break;
		case 3:
		{
			//3.	������ ������, ��������� �� 14 ��������� ������ ����.����� ���������� ��������� ������ �� ��������.
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
			/*4.	������ ������, ��������� �� 12 ��������� ������ ����.
				�������� ����� ������, ������� �������� ������ �������� �������������������� ��������� �������*/
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
			/*5.	����� ������, ��������� �� 15 ��������� ������������� ����.
				���������� ���������� ���������, �������� ������� ������ ������� ��������*/

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
cout << schet << " - ��������� ������ ��� ������ �������. "<< endl;
		}
		break;
		
		default:
			break;
		}


		cout << "������ ��� (1)�� (2)���";
		cin >> p;
	} while (p==1);




}