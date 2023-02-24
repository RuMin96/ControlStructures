#include<iostream>
#include<Windows.h>
using namespace std;
//#define FACTORIAL
//#define STEPEN
//#define ASCII
//#define FIBONACCI
//#define VLOGENIE_ITERACII
//#define PIFAGOR

void main()
{
	setlocale(LC_ALL, "");
#ifdef FACTORIAL
	int i;
	int sum=1;
	int n;
	cout << "Введите число Факториала:"; cin >> n;
	for (i=1;i<=n;i++)
	{
		sum = sum*i;
	}
	cout << sum << endl;
#endif
#ifdef STEPEN
	int n;
	int a;
	int st=1;
	cout << "Введите число,которое нужно возвести в степень"; cin >> a;
	cout << "Введите число степени"; cin >> n;
	for (int i=1;i<=n;i++)
	{
		st *= a;

	}
	cout << st << endl;

#endif
#ifdef ASCII
	for (int i = 0; i < 128; i++)
	{
		char b = i;
		cout << i << " " << b << endl;
	}
#endif
#ifdef FIBONACCI
	int i;
	int s;
	int d;
	cout << "Введите предел чисел Фибоначчи"; cin >> s;
	for (i=0,d=1; i <= s; i++)
	{
		cout << i + i - d << endl;
	}
#endif
	#ifdef VLOGENIE_ITERACII
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << endl;
		for (int j = 1; j <= 10; j++)
		{
		
			cout << i << "*" << j << "="<<i*j << endl;
		}
		cout << endl;
	}
#endif
#ifdef PIFAGOR

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif
}