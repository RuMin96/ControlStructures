#include <iostream>
using namespace std;
using std::cin;
using std::cout;
    //#define EXPRESSION_1
	//#define EXPRESSION_2
	//#define EXPRESSION_3
	//#define EXPRESSION_4
	#define EXPRESSION_5
	//#define TEST_PROGRAM
    //#define CALCULATOR

void main()
{
	setlocale(LC_ALL, "");

 #ifdef EXPRESSION_1
	int i = 3;
	i = ++i + ++i;
	cout << i << endl;	//10
 #endif EXPRESSION_1

 #ifdef EXPRESSION_2
	int i = 3;
	i = ++i + 1 + ++i * 2;
	cout << i << endl;	//16
 #endif EXPRESSION_2

 #ifdef EXPRESSION_3
	int i = 3;
	i += ++i + 1 + ++i *= 2;
	cout << i << endl;	//21
 #endif EXPRESSION_3

 #ifdef EXPRESSION_4
	int i = 3;
	i += i++ + 1 + (++i *= 2);
	cout << i << endl;	//31
 #endif EXPRESSION_4

 #ifdef EXPRESSION_5
	int i = 3;
	i *= i++ + 1 + (++i += 2);
	cout << i << endl;	//105 //79
 #endif EXPRESSIONS_5

 #ifdef TEST_PROGRAM

	int minus;

	cout << "������ 1:����� (-) ��� :(������� ����� ����������� ������)\n 1)�������� \n 2)������� \n 3)������� \n 4)���������"; cin >> minus;
	if (minus == 1)
	{
		cout << "�����" << endl;
	}

	else
	{
		cout << "�� �����" << endl;
	}

	int ternar;
	cout << "������ 2: ������� ��������� ���������� � ����� �++? \n 1)3\n 2)2 \n 3)4 \n 4)1\n "; cin >> ternar;
	if (ternar == 4)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "�� �����" << endl;
	}

	int Type_of_data;
	cout << "������ 3: ����� ��� ������ ������� �� �������? \n 1)Long\n 2)Short \n 3)Int \n 4)Long-Long\n "; cin >> Type_of_data;
	if (Type_of_data == 3)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "�� �����" << endl;
	}
	int iostream;
	cout << "������ 4: iostream-��� \n 1)���������\n 2)���������� \n 3)��������� \n 4)����������\n "; cin >> iostream;
	if (iostream == 2)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "�� �����" << endl;
	}
	int assign;
	cout << "������ 5: ����� ��������� � ��������������� � ��������� ���������? \n 1)������ ��������� � ������ �� ����\n 2)������� ��������� � ����� �� ����� \n 3)������ ��������� � ����� �� ����� \n 4)������� ��������� � ������ �� ����\n "; cin >> iostream;
	if (iostream == 1)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "�� �����" << endl;
	}



 #endif TEST_PROGRAM

 #ifdef CALCULATOR
	int a;
	int b;
	char sign = '+'; '-'; '*'; '/';
	int amount;
	int differense;
	int multiplication;
	int share;

	cout << "������� ���������"; cin >> a; cin >> sign; cin >> b;
	
		if (sign =='+')
		{
			amount = a + b;
				cout << amount << endl;
		}
		else if (sign == '-')
		{
			differense = a - b;
			cout << differense;
		}
		else if (sign == '*')
		{
			multiplication = a * b;
			cout << multiplication;
		}
		else if (sign == '/')
		{
			share = a / b;
			cout << share;
		}
	
	
 #endif CALCULATOR
}