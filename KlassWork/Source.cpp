#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<locale.h>

using namespace std;

//// KlassWork

/// 2019 02 07



void bubble(int arr[], int ind)
{
	int i, j, c;
	for (i = 0; i < ind - 1; i++)

		for (j = ind - 2; j >= i; j--)

			if (arr[j] < arr[j + 1])

			{

				c = arr[j];

				arr[j] = arr[j + 1];

				arr[j + 1] = c;

			}

}

int binarySearch(int a[], int size, int key)

{

	int low = 0;

	int high = size - 1;

	int middle;



	while (low <= high)

	{

		middle = (low + high) / 2;

		if (a[middle] < key)

			low = middle + 1;

		else if (a[middle] > key)

			high = middle - 1;

		else

			return middle;

	}

	return -1;

}

void fillArray(int a[], int n)

{

	for (int i = 0; i < n; i++)

		a[i] = 1 + rand() % 9;

}



void printArray(int a[], int n)

{

	for (int i = 0; i < n; i++)

		cout << a[i] << " ";

	cout << endl;

}

//26.	Напишите функцию, которая принимает выражение в виде строки и проверяет, правильно ли расставлены в нем скобки. 
//		А) *Скобки могут быть только круглые «(» «)».


bool checkBrackets(char c[])
{
	int k = 0;
	for (int i = 0; i < strlen(c); i++)
	{
		if (c[i] == '(' || c[i] == '[') k++;
		else if (c[i] == ')' || c[i] == ']') k--;
		if (k < 0) return false;
	}
	if (k == 0) return true;
	else return false;
}


//27.	**Напишите функцию, которая принимает массив, количество элементов, тип сортировки(пузырьком, выбором и т.д. - строка)
//		и порядок сортировки(по убыванию, по возрастанию – логическая переменная).Функция сортирует массив.Реализовать перегрузки для целых и вещественных чисел.

void choice(int arr[], int n)    // сортировка вставкой вариант 1 более эфективн
{
	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j])
			{
				int c = arr[j];
				arr[j] = arr[i];
				arr[i] = c;
				count++;
			}
	cout << count<<endl;
}

void insertionSort(int arr[], int size)  // сортировка вставкой вариант 2
{
	int count = 0;
	for (int i = 0; i < size; i++)
		for (int j = i; j > 0; j--)
		{
			count++;
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);

			else
				break;
		}
	cout << count<<endl;
}


void selectionSort(int arr[], int n)
{
	int min, min_pos;

	for (int i = 0; i < n - 1; i++)
	{
		min = INT_MAX;
		for (int j = i; j < n; j++)
			if (arr[j] < min)
			{
				min = arr[j];
				min_pos = j;
			}
		swap(arr[i], arr[min_pos]);
	}


}


void copyArray(int arr[], int b[], int size) 
{
	for (int i = 0; i < size; i++)
	{
		b[i] = arr[i];
	}
}

void rectangleArea(int a, int b)
{
	int S;
	cout << "Введите сторону прямоуголиника a и b ->";
	cin >> a >> b;
	S = a*b;
	cout << "Площадь прямоугольника =" << S << endl << endl;
}

void figure1(int n=7, char ch = '*', int type = 0);

void fillDiagonal(int a[][30], int n);

template<typename T>
void printArray2(T a[30][30], int n, int m);

template<typename T>
void sortArray(T arr[][30], int n, int m, char sorting_order = 'a');

template<typename T>
void fillArray2(T a[][30], int n);


int main()
{
	setlocale(LC_ALL, "");
	
	/*int const x=10;
	
	int arr[x] = { 0 };
	int b[x] = { 0 };

	

	srand(time(NULL));
	
	fillArray(arr, x);
	copyArray(arr, b, x);

	printArray(arr, x);
	//bubble(arr, 5);
	//choice(arr, x);
	//printArray(arr, x);
	//insertionSort(b, x);
	//printArray(arr, x);
	selectionSort(arr, x);
	printArray(arr, x); */

	//cout << binarySearch(arr, 5, 5)<<endl;*/

	//char c[50] = "[(Hello(]";  //  H e l l o \0   - \0 индикаор конца строки

	//cin >> c;					// считывает все символы только до пробела например The Example - введет только The
	
	//cout << c << endl;

	//for (int i = 0; i < strlen(c); i++)  // strlen(c) - определяет кол-во символов в массиве, конец определяет по /0
		//cout << c[i] << endl;

	//cout << checkBrackets(c) << endl;

	//int x=0, y=0;

	//rectangleArea(x, y);


	// 4.	Написать функции и протестировать их в основной программе. Функции печатают фигуры и используют параметры по умолчанию. 
	// Параметры по умолчанию определяют, каким символом печатается фигура и является ли она заполненной или печатается только рамка фигуры.

	/*figure1();
	figure1(7);
	figure1(7, '+');
	figure1(7, '+', 1);*/

	

	int a[30][30];
	//float a[30][30];	
	//char a[30][30];
	
	

	//fillDiagonal(a, 7);
	fillArray2(a, 7);
	printArray2(a, 7, 7);
	sortArray(a, 7, 7, 'a');
	printArray2(a, 7, 7);


	system("pause");

}

void figure1(int n, char ch, int type)

// 4.	Написать функции и протестировать их в основной программе. Функции печатают фигуры и используют параметры по умолчанию. 
// Параметры по умолчанию определяют, каким символом печатается фигура и является ли она заполненной или печатается только рамка фигуры.


{
	if (type == 0)	// полная фигура
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = n - 1 - i; j < n; j++)
			{
				cout << ch;
			}
			cout << endl;
		}				
	}
	else			// пустая фигура
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == n - 1 || j == 0 || i == j) cout << ch;
				else cout << " ";
			}
			cout << endl;
		}
	}
}


void fillDiagonal(int a[][30], int n) 
{
	//7.	Написать функцию, которая заполняет переданную ей квадратную матрицу по правилу : диагональные элементы ровни 1, другие элементы ровни 0. 
	//	Использовать функцию для заполнения матрицы размером 7хх.7.
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j || i == n - 1 - j)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}


}


template<typename T>
void fillArray2(T a[][30], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] =rand() % 9;
		}
	}
	cout << endl;
}


template<typename T>
void printArray2(T a[][30], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}


template<typename T>
void sortArray (T arr[][30], int n, int m, char sorting_order)
{
	if (sorting_order == 'a')
	{
		for (int i = 0; i < n; i++)
			for (int pass = 0; pass < m - 1; pass++)
			{
				for (int j = i; j < m - 1; j++)
				{
					if (arr[i][j] > arr[i][j + 1])
						swap(arr[i][j], arr[i][j + 1]); // меняем местами элементы массива
				}
			}
	}

	if (sorting_order == 'd')
	{
		for (int i = 0; i < n; i++)
			for (int pass = 0; pass < m - 1; pass++)
			{
				for (int j = i; j < m - 1; j++)
				{
					if (arr[i][j] < arr[i][j + 1])
						swap(arr[i][j], arr[i][j + 1]);
				}
			}
	}
	cout << endl;
}