#include <iostream>

#define tab "\t"

using namespace std;

int a; // глобальная переменная, ее видят все функции 
       // и ее может изменить любая функция, поэтому 
       // использование глобальных пепеменных настоятельно НЕ рекомендуется (DEPRECATED - ОСУЖДАЕТСЯ)
       // поскольку неизвестно что хранится в этой самой глобальной переменной
       // Но, глобальные константы используются очень широко т.к. ее изменить никто не может, но все ее
       // видят (функции) и могут прочитать. При обозначении глобальной переменной ставят префикс g_ т.е.
       // int g_a

const int ROWS = 5;
const int COLS = 8;
const int n = ROWS*COLS;



template <typename T> void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS); // Function declaration - объявление функции (прототип функции)
template <typename T> void Print(T arr[ROWS][COLS], const int ROWS,const int COLS);
template <typename T> T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
template <typename T> T Avg(T arr[ROWS][COLS], const int ROWS,const int COLS,const int n);
template <typename T> T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
template <typename T> T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

#define ARRAYS_1
#define ARRAYS_2


void main() 
{

	setlocale(0, "russian");

	cout << "\t\tПерезагрузка функции - Function overloading.\n\n\n\t\t\t\tТип INT.\n\n" << endl;

	/*const int n = 5;
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

	cout << "\t\t\t\tТип CHAR.\n\n" << endl;
	char c_arr[n];
	FillRand(c_arr, n);
	Print(c_arr, n);
	PrintReverse(c_arr, n);
	cout << "Сумма элементов массива: " << Sum(c_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(c_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr, n) << "\n\n" << endl;

	cout << "\t\t\t\tТип SHORT.\n\n" << endl;
	short s_arr[n];
	FillRand(s_arr, n);
	Print(s_arr, n);
	PrintReverse(s_arr, n);
	cout << "Сумма элементов массива: " << Sum(s_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(s_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(s_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(s_arr, n) << "\n\n" << endl;
	*/

	cout << "\n================================ 2D arrays ====================================\n"<<endl;

	int arr_2[ROWS][COLS];
	FillRand(arr_2, ROWS, COLS);
	Print(arr_2,ROWS,COLS);
	cout << "Сумма элементов массива: " << sum(arr_2, ROWS,COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr_2[ROWS][COLS], ROWS, COLS, n) << endl;
	//cout << "Минимальное значение в массиве: " << minValueIn(arr_2, ROWS,COLS) << endl;
	//cout << "Максимальное значение в массиве: " << maxValueIn(arr_2, ROWS, COLS) << "\n\n" << endl;
}

template <typename T> void FillRand(T arr_2[ROWS][COLS], const int ROWS, const int COLS) // fUNCTION DEFINITION - ОПРЕДЕЛЕНИЕ ФУНКЦИИ т.е. что она выполняет(Реализация функции)
{
	// Определяет что делает функция
	for (int i = 0;i < ROWS;i++)
	{
		for (int j = 0;j < COLS;j++) 
		{
			arr_2[i][j] = rand() % 100;
		}
	}
}
template <typename T> void Print(T arr_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0;i < ROWS;i++)
	{
		for (int j=0;j<COLS;j++)
		{
			cout << arr_2[i][j] << tab;
		}
		cout << endl;
	}
}
template <typename T> T sum(T arr_2[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++) 
	{
		for (int j = 0; j < COLS; j++) 
		{
			sum += arr_2[i][j];
		}
		return sum;
	}
	
}
template <typename T> double Avg(double arr_2[ROWS][COLS], const int ROWS, const int COLS, const int n)
{
	return (double)sum(arr_2[ROWS][COLS], n) / n;
}
template <typename T> T minValueIn(T arr_2[ROWS][COLS], const int ROWS,const int COLS)
{
	T min = arr_2[0][0];
	for (int i = 0;i < ROWS;i++)
	{
		for (int j = 0;j < COLS;j++) {
			if (arr_2[i][j] < min)
				min = arr_2[i][j];
		}	
	}
	return min;
}
template <typename T> T maxValueIn(T arr_2[ROWS][COLS],const int ROWS,const int COLS)
{
	T max = arr_2[0][0];
	for (int i = 0;i < ROWS;i++)
	{
		for (int j = 0;j < COLS;j++) {
			if (arr_2[i][j] > max)
				max = arr_2[i][j];
		}
		return max;
	}
	
}
