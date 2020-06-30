#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>



using namespace std;
/*
	int a, b, c, d, num=0, den=0;4
	char op = '+', dr = '/';

	cin >> a >> b >> c >> d;

	//cout << a << dr << b << op << c << dr << d;

	num = a * d + b * c;
	den = b * d;

	cout << num << dr << den << endl;5
	den = b * d;
	*/
	//c = a / b;
	//c = a ^ b;
	//cout << c << endl;
//for (size_t i = 0; i < length; i++)

int main()
{
	/*double a, b, c;
	char op;

	cout << "Enter a and b: " << endl;
	cin >> a >> op >> b;

	if (op == '+')
		c = a + b;
	else if (op == '-') 
	{
		c = a - b;
	}
	else if (op == '*')
		c = a * b;
	else if (op == '/' &&  b != 0)
		c = a / b;
	else if (op == '/' &&  b == 0)
	{
		cout << "B mustn't 0!" << endl;
		return 0;
	}
	else if (op == '^' && a != 0)
		c = pow(a, b);

	cout << "Answer: " << c << endl;
    */

	// верхняя граница чисел	
	const int limit = 10000;
	
	int f0 = 0;
	int f1 = 1;

	while (f1 < limit)
	{
		cout << f1 << " ";
		int f2 = f0 + f1;
		f0 = f1;
		f1 = f2;
	}

	return 0;
}