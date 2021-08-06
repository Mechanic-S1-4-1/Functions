#include "stdafx.h"
#include "FillRand.h"
#include "Print.h"
#include "Statistics.h"

#define ARRAYS_1
#define ARRAYS_2


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


	cout << "\n================================ 2D arrays ====================================\n"<<endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2,ROWS,COLS);
}

/*Все объявления-прототипы функции хранятся в header файлах*/