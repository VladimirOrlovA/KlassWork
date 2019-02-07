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

int main()
{
	int arr[5] = { 0 };

	srand(time(NULL));
	
	fillArray(arr, 5);
	printArray(arr, 5);
	bubble(arr, 5);
	printArray(arr, 5);
	cout << binarySearch(arr, 5, 5)<<endl;

	char c[50] = "Hello";  //  H e l l o \0   - \0 индикаор конца строки

	cin >> c;					// считывает все символы только до пробела например The Example - введет только The
	
	//cout << c << endl;

	for (int i = 0; i < strlen(c); i++)  // strlen(c) - определяет кол-во символов в массиве, конец определяет по /0
		cout << c[i] << endl;


	system("pause");

	return 0;
}