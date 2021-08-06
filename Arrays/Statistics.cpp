#include "Statistics.h"

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += arr[i];
	}
	return sum;
}
short Sum(short arr[], const int n)
{
	short sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
float Avg(float arr[], const int n)
{
	return (float)Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(short arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
char minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
short minValueIn(short arr[], const int n)
{
	short min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
float maxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
char maxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
short maxValueIn(short arr[], const int n)
{
	short max = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
