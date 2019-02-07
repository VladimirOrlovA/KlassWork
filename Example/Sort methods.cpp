#include <iostream>
#include <cstdlib>
#include <Windows.h> 
#include <iomanip>
#include <ctime>
using namespace std;

void fillArray(int a[], int n) {
	for (int i = 0; i < n; i++)
		a[i] = rand()%50+1;}
void fillArray(char a[], int n) {
	for (int i = 0; i < n; i++)
		a[i] = char(rand()%57+65);
}
void printArray(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout << endl;}
void printArray(char a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
void bubbleSort(int a[], size_t n) {
	int tmp;
	for (size_t pass = 0; pass < n; pass++)
	{
		for (size_t i = 0; i < n-1; i++) {
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i+1]);
				
			}
		}
	}
}
//Скобки могут быть круглые «(» «)» и квадратные «[» и «]»
bool checkBrackets(char c[]) {
	int k = 0;
	int l = 0;
	for (int i = 0; i < strlen(c); i++) {
		if (c[i] == '(') k++;
		else if (c[i] == ')') k--;
		else if (c[i] == '[') l++;
		else if (c[i] == ']') l--;
		if (k < 0 || l<0) return false;

	}
	if (k == 0 && l==0) return true;
	else return false;}

void insertionSort(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
			else
				break;
		}
	}
}

void selectionSort(int arr[], int n) {
	int min, min_pos;
	for (int i = 0; i < n - 1; i++) {
		min = INT_MAX;
		for (int j = i; j < n; j++) {
			if (arr[j] < min)
			{
				min = arr[j];
				min_pos = j;
			}
		}
		swap(arr[i], arr[min_pos]);
	}
}

void sortByChoice(int a[], int size, char type) {
	switch (type)
	{
	case 'i':		insertionSort(a, size);		break;
	case 's':		selectionSort(a, size);		break;
	case 'b':		bubbleSort(a, size);		break;
	default:		cout << "Wrong selection type" << endl; break;}
}

int main()
{	srand(time(NULL));
int a[] = { 2, 5, 3, 6, 8, 9, 1 };
char sortType;
while (true) {
	cout << "Enter b-to sort by bubble sort" << endl;
	cout << "Enter i-to sort by insertion sort" << endl;
	cout << "Enter s-to sort by selection sort" << endl;
	cout << "Enter e-to exit" << endl;
	cin >> sortType;
	if (sortType == 'e') break;

	sortByChoice(a, 7, sortType);
	printArray(a, 7);
}



	system("pause");
	return 0;
}
