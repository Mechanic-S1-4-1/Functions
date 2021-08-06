#include "Print.h"

void Print(int arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0;i < ROWS;i++)
	{
		for (int j = 0;j < COLS;j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
void Print(float arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(short arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void PrintReverse(int arr[], const int n)
{
	for (int i = n - 1;i >= 0;i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(double arr[], const int n)
{
	for (int i = n - 1;i >= 0;i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(float arr[], const int n)
{
	for (int i = n - 1;i >= 0;i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(char arr[], const int n)
{
	for (int i = n - 1;i >= 0;i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(short arr[], const int n)
{
	for (int i = n - 1;i >= 0;i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}