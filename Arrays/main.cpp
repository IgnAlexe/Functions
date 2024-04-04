#include<iostream>
using namespace std;

void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);
void Print(const int arr[], const int n);
void  Sum(int arr[], const int n);
void  Avg(int arr[], const int n);
void minValueIn(int arr[], const int n);
void maxValueIn(int arr[], const int n);
//void SortChoice(int arr[], const int n);
void SortBoble(int arr[], const int n);
//void SortIns(int arr[], const int n);
void ShiftLeft(int arr[], const int n);
void ShiftRith(int arr[], const int n);
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	//SortChoice(arr, n);
	//SortBoble(arr, n);
	//SortIns(arr, n);
	ShiftLeft(arr, n);
	ShiftRith(arr, n);
}
void FillRand(int arr[], const int n, int minRand , int maxRand )
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand-minRand);
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void  Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива:  " << sum << endl;
}
void  Avg(int arr[], const int n)
{
	double sum = 0;
	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	avg = sum / n;
	cout << "Средне-арифметическое элементов массива:  " << avg << endl;
}
void minValueIn(int arr[],const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	cout << "Минимальное значение элементов массива:  " << min << endl;
}
void maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i] ) max = arr[i];
	}
	cout << "Максимальное значение элементов массива:  " << max << endl;
}
/*void SortChoice(int arr[], const int n)
{
	int min ,num;
	for (int i = 0; i < n; i++)
	{
		min = arr[i];
		num = i;
		for(int j=i+1; j<n;j++)
		{ 
			if (arr[j] < min)
			{
				num = j;
				min = arr[j];
			}
			if (num != i)
			{
				arr[num] = arr[i];
				arr[i] = min;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}*/
void SortBoble(int arr[], const int n)
{
	int bob;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				bob = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = bob;
			}
		}
	}
	Print(arr, n);
}
/*void SortIns(int arr[], const int n)
{
	int num,one;
	minValueIn(arr, n, min);
	arr[0] = min;
	for (int i = 0; i < n; i++)
	{
		num = arr[i];
		for (int j=i-1; arr[j]>num;j--)
		{
			arr[j + 1] = arr[j];
			arr[j + 1] = num;
		}
		for (int j=1;j<n && arr[j]<one;j++)
		{
			arr[j - 1] = arr[j];
			arr[j - 1] = one;
		}
	}
	Print(arr, n);
}*/
void ShiftLeft(int arr[], const int n)
{
	int num, b;
	cout << "Введите колличество сдвигов влево: " ; cin >> num;
	for (int i = 0; i < num; i++)
	{
		b = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = b;
		b = arr[0];
		Print(arr,n);
	}
}
void ShiftRith(int arr[], const int n)
{
	int num, b;
	cout << "Введите колличество сдвигов вправо: "; cin >> num;
	for (int i = 0; i < num; i++)
	{
		b = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = b;
		Print(arr, n);
		b = arr[n - 1];
	}
}