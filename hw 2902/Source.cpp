#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

template<typename T>
void arrayFill(T arr[], const int SIZE);
void arrayFill(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void arrayPrint(T arr[], const int SIZE);
void arrayPrint(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void arraySort(T arr[], const int SIZE);
void arraySort(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T arrayTotal(T arr[], const int SIZE);

template<typename T>
T arrayAverage(T arr[], const int SIZE);

template<typename T>
T arrayMax(T arr[], const int SIZE);

template<typename T>
T arrayMin(T arr[], const int SIZE);

void main()
{
	const int SIZE = 10;
	int arr[SIZE];
	double brr[SIZE];
	char crr[SIZE];


	int A[ROWS][COLS];
	arrayFill(A, ROWS, COLS);
	arrayPrint(A, ROWS, COLS);
	arraySort(A, ROWS, COLS);
	cout << endl;
	arrayPrint(A, ROWS, COLS);
	cout << endl;

	//¬есь красивый вывод дл€ массива тип инт
	arrayFill(arr, SIZE); cout << "Int array is:\n"; arrayPrint(arr, SIZE); arraySort(arr, SIZE); cout << "\nSorted int array is:\n"; arrayPrint(arr, SIZE);
	cout << "\nTotal of int array is:\n" << arrayTotal(arr, SIZE); cout << "\nAverage of int array is:\n" << arrayAverage(arr, SIZE);
	cout << "\nMax of int array is:\n" << arrayMax(arr, SIZE); cout << "\nMin of int array is:\n" << arrayMin(arr, SIZE);
	//¬есь красивый вывод дл€ массива тип дабл
	arrayFill(brr, SIZE); cout << "\nDoublke array is:\n"; arrayPrint(brr, SIZE); arraySort(brr, SIZE); cout << "\nSorted double array is:\n"; arrayPrint(brr, SIZE);
	cout << "\nTotal of double array is:\n" << arrayTotal(brr, SIZE); cout << "\nAverage of double array is:\n" << arrayAverage(brr, SIZE);
	cout << "\nMax of double array is:\n" << arrayMax(brr, SIZE); cout << "\nMin of int array is:\n" << arrayMin(brr, SIZE);
	//¬есь красивый вывод дл€ массива тип чар
	arrayFill(crr, SIZE); cout << "\nChar array is:\n"; arrayPrint(crr, SIZE); arraySort(crr, SIZE); cout << "\nSorted char array is:\n"; arrayPrint(crr, SIZE);
	cout << "\nTotal of char array is:\n" << arrayTotal(crr, SIZE); cout << "\nAverage of char array is:\n" << arrayAverage(crr, SIZE);
}

template<typename T>
void arrayFill(T arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}
void arrayFill(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = (rand() % 40) + 30;
		}
	}
}

template<typename T>
void arrayPrint(T arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}

void arrayPrint(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
template<typename T>
void arraySort(T arr[], const int SIZE)
{
	int counter = 0;
	for (int i = 0; i < SIZE; i++)
	{
		int k = i;
		while (k > 0 && arr[k - 1] > arr[k])
		{
			int temp = arr[k - 1];
			arr[k - 1] = arr[k];
			arr[k] = temp;
			k -= 1;
			counter++;
		}
	}
	cout << endl << counter << endl;
}

void arraySort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int temp = 0;
	int counter = 0;
	int iters = 0;
	for (int c = 0; c <= (ROWS*COLS); c++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS - 1; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					temp = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = temp;
					
				}counter++;
				iters++;
			}
		}
		for (int x = 0; x < COLS; x++)
		{
			for (int z = 0; z < ROWS - 1; z++)
			{
				if (arr[z][x] > arr[z][x + 1])
				{
					temp = arr[z][x];
					arr[z][x] = arr[z][x + 1];
					arr[z][x + 1] = temp;
					
				}
				iters++;counter++;
			}
		}
	}
	cout << counter;
}
template<typename T>
T arrayTotal(T arr[], const int SIZE)
{
	double total = 0;
	for (int i = 0; i < SIZE; i++)
	{
		total += arr[i];
	}
	return total;
}

template<typename T>
T arrayAverage(T arr[], const int SIZE)
{
	return arrayTotal(arr, SIZE) / 10;
}

template<typename T>
T arrayMax(T arr[], const int SIZE)
{
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

template<typename T>
T arrayMin(T arr[], const int SIZE)
{
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max > arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
