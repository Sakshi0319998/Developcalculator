// C++ program to develop calculator 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double num1 , num2;
	char op;

	cout << " enter the operator( * , - , + , /): ";
	cin >> op;
	cout << "enter the two numbers:";
    cin >> num1 >> num2;

	switch (op)
{
	  case '/':
		cout << num1 / num2;
		break;

		case '*':
		cout << num1 * num2;
		break;

	  case '+':
		cout << num1 + num2;
		break;

	  case '-':
		cout << num1 - num2;
		break;

	
	default:
		cout << "Error! Invalid Operator";
	}
	// switch statement ends

	return 0;
}
