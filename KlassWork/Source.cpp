#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

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

void insertionSort(int arr[], int size)  // // сортировка вставкой вариант 2
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

int main()
{
	int const x=10;
	
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
	printArray(arr, x);

	//cout << binarySearch(arr, 5, 5)<<endl;*/

	//char c[50] = "[(Hello(]";  //  H e l l o \0   - \0 индикаор конца строки

	//cin >> c;					// считывает все символы только до пробела например The Example - введет только The
	
	//cout << c << endl;

	//for (int i = 0; i < strlen(c); i++)  // strlen(c) - определяет кол-во символов в массиве, конец определяет по /0
		//cout << c[i] << endl;

	//cout << checkBrackets(c) << endl;

	system("pause");

	return 0;
}