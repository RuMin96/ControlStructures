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

	cout << "Вопрос 1:Минус (-) это :(Введите номер правильного ответа)\n 1)Оператор \n 2)Операнд \n 3)Литерал \n 4)Константа"; cin >> minus;
	if (minus == 1)
	{
		cout << "Верно" << endl;
	}

	else
	{
		cout << "Не верно" << endl;
	}

	int ternar;
	cout << "Вопрос 2: Сколько тернарных операторов в языке С++? \n 1)3\n 2)2 \n 3)4 \n 4)1\n "; cin >> ternar;
	if (ternar == 4)
	{
		cout << "Верно" << endl;
	}
	else
	{
		cout << "Не верно" << endl;
	}

	int Type_of_data;
	cout << "Вопрос 3: Какой тип данных зависит от системы? \n 1)Long\n 2)Short \n 3)Int \n 4)Long-Long\n "; cin >> Type_of_data;
	if (Type_of_data == 3)
	{
		cout << "Верно" << endl;
	}
	else
	{
		cout << "Не верно" << endl;
	}
	int iostream;
	cout << "Вопрос 4: iostream-это \n 1)Директива\n 2)Библиотека \n 3)Константа \n 4)Переменная\n "; cin >> iostream;
	if (iostream == 2)
	{
		cout << "Верно" << endl;
	}
	else
	{
		cout << "Не верно" << endl;
	}
	int assign;
	cout << "Вопрос 5: Какой приоритет и ассоциатевность у оператора присвоить? \n 1)Низкий приоритет и справа на лево\n 2)Высокий приоритет и слева на право \n 3)Низкий приоритет и слева на право \n 4)Высокий приоритет и справа на лево\n "; cin >> iostream;
	if (iostream == 1)
	{
		cout << "Верно" << endl;
	}
	else
	{
		cout << "Не верно" << endl;
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

	cout << "Введите выражение"; cin >> a; cin >> sign; cin >> b;
	
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