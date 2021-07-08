#include <iostream>

#define tab "\t"

using namespace std;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(short arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(short arr[], const int n);

void PrintReverse(int arr[], const int n);
void PrintReverse(double arr[], const int n);
void PrintReverse(float arr[], const int n);
void PrintReverse(short arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
short Sum(short arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
float Avg(float arr[], const int n);
short Avg(short arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
short minValueIn(short arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);
short maxValueIn(short arr[], const int n);

void main() 
{

	setlocale(0, "russian");

	cout << "\t\tПерезагрузка функции - Function overloading.\n\n\n\t\t\t\tТип INT.\n\n" << endl;
	const int n = 5;
	int arr[n] = {3,5,8,9,4};
	FillRand(arr, n);
	Print(arr, n);
	PrintReverse(arr,n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) <<"\n\n"<< endl;
	
	cout << "\t\t\t\tТип DOUBLE.\n\n" << endl;
	double d_arr[n]; // double array
	FillRand(d_arr, n);
	Print(d_arr, n);
	PrintReverse(d_arr, n);
	cout << "Сумма элементов массива: " << Sum(d_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(d_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, n) <<"\n\n"<< endl;
	
	cout << "\t\t\t\tТип FLOAT.\n\n" << endl;
	float f_arr[n];
	FillRand(f_arr, n);
	Print(f_arr, n);
	PrintReverse(f_arr, n);
	cout << "Сумма элементов массива: " << Sum(f_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(f_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(f_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(f_arr, n) <<"\n\n"<< endl;

	cout << "\t\t\t\tТип SHORT.\n\n" << endl;
	short s_arr[n];
	FillRand(s_arr, n);
	Print(s_arr, n);
	PrintReverse(s_arr, n);
	cout << "Сумма элементов массива: " << Sum(s_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(s_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(s_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(s_arr, n) << "\n\n" << endl;

}

void FillRand(int arr[], const int n)
{
	for (int i = 0;i < n;i++) {
		arr[i] = rand()%100; // фукция rand() возвращает псевдослучайное число,
						 // в промежутке от 0 до 32 767.
		                 // Если хотим сделать случайное число меньше,
		                 // то можно например поставить ограничить значением 100, 
		                 // а именно rand()%100
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0;i < n;i++) {
		arr[i] = double(rand()%100)/10; // фукция rand() возвращает псевдослучайное число,
						 // в промежутке от 0 до 32 767.
		                 // Если хотим сделать случайное число меньше,
		                 // то можно например поставить ограничить значением 100, 
		                 // а именно rand()%100
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0;i < n;i++) {
		arr[i] = double(rand()%100)/10; // фукция rand() возвращает псевдослучайное число,
						 // в промежутке от 0 до 32 767.
		                 // Если хотим сделать случайное число меньше,
		                 // то можно например поставить ограничить значением 100, 
		                 // а именно rand()%100
	}
}
void FillRand(short arr[], const int n)
{
	for (int i = 0;i < n;i++) {
		arr[i] = double(rand()%100)/10; // фукция rand() возвращает псевдослучайное число,
						 // в промежутке от 0 до 32 767.
		                 // Если хотим сделать случайное число меньше,
		                 // то можно например поставить ограничить значением 100, 
		                 // а именно rand()%100
	}
}

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
void Print(float arr[], const int n)
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
	for (int i = n-1;i >= 0;i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(double arr[], const int n)
{
	for (int i = n-1;i >= 0;i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(float arr[], const int n)
{
	for (int i = n-1;i >= 0;i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(short arr[], const int n)
{
	for (int i = n-1;i >= 0;i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

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
	return (double)Sum(arr,n)/n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr,n)/n;
}
float Avg(float arr[], const int n)
{
	return (float)Sum(arr,n)/n;
}
short Avg(short arr[], const int n)
{
	return (short)Sum(arr,n)/n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)
			min=arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)
			min=arr[i];
	}
	return min;
}
float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)
			min=arr[i];
	}
	return min;
}
short minValueIn(short arr[], const int n)
{
	short min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)
			min=arr[i];
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