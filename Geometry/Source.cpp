#include<iostream>
using namespace std;
//#define FIRST_TASK
//#define SECOND_TASK
//#define THIRD_TASK
//#define FOURTH_TASK
//#define FIFTH_TASK
//#define SIXTH_TASK
//#define SEVENTH_TASK
//#define PASKAL_TRIANGLE
#define CHESS

void main()
{
	setlocale(LC_ALL, "");
#ifdef FIRST_TASK
	int n;
	cout << "¬ведите размер фигуры:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef SECOND_TASK
	int n;
	cout << "¬ведите размер треугольника:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";

		}
		cout << endl;
	}
#endif

#ifdef THIRD_TASK
	int n;
	cout << "¬ведите размер треугольника:"; cin >> n;
	for (int i = n; i >= 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "* ";

		}
		cout << endl;
	}
#endif
#ifdef FOURTH_TASK
	int n;
	int g = 4;
	cout << "¬ведите размер треугольника:"; cin >> n;
	for (int i = n; i >= 0; i--, g += 2)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "* ";

		}
		cout.width(g);
		cout << endl;
	}
#endif
#ifdef FIFTH_TASK
	int n;
	cout << "¬ведите размер треугольника:"; cin >> n;
	int g = n;
	for (int i = 0; i < n; i++, g--)
	{
		cout.width(g + g);
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef SIXTH_TASK
	int n;
	int d = 1;
	cout << "¬ведите размер ромба:"; cin >> n;
	int c = n;
	int r = 1;
	for (int i = 0; i < 1; i++, c--)
	{
		cout.width(c);
		for (int j = 0; j < n; j++, d += 2, c--)
		{
			cout.width(c);
			cout << "/"; cout.width(d); cout << "\\" << endl;
		}
	}
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < n; j++, d -= 2, r++)
		{
			cout.width(r);
			cout << "\\"; cout.width(d - 2); cout << "/" << endl;
		}
		cout << endl;
	}
#endif
#ifdef SEVENTH_TASK
	int n;
	int j;
	cout << "¬ведите размер фигуры:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)cout << "+ ";
			else cout << "- ";
		}
		cout << endl;
	}
#endif

#ifdef PASKAL_TRIANGLE
	int n;
	int g = 0;

	cout << "¬ведите количество р€дов:"; cin >> n;
	for (int i = 0; i <= n; i--,g-=2)
	{
		cout.width(g-2);
		for (int j = 0; j <= n; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef CHESS
	cout << (char) 218;
#endif
}