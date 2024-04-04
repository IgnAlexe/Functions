#include <iostream>
#include <conio.h>
using namespace std;

int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
void Power();
double Quot(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "¬ведите два числа:\t"; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;
	Power();
}

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	//Differece
	return a - b;
}
int Prod(int a, int b)
{
	//Product
	return a * b;
}
double Quot(int a, int b)
{
	return (double)a / b;
}
void Power()
{
	int  b, x, ans=1;
	cout << "¬ведите число: "; cin >> b;
	cout << "¬ведите степень: "; cin >> x;
	for (int i = 0; i < x; i++)
	{
		ans*= b;
	}
	cout << "ќтвет: "<<ans; 
}
