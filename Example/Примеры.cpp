#include <iostream>
#include <cstdlib>
#include <Windows.h> 
#include <iomanip>
#include <ctime>
using namespace std;
int binarySearch(int a[], int size, int key) {
	int low = 0;
	int high = size - 1;
	int middle;
	while (low <= high) {
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
void change_var(int &a){
	a = 100;}
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
double okrugleniye(double var, int n) {
	var = double(int(var*pow(10, n) + 0.5)) / pow(10, n);
	return var;
}

int zeros(int a[], int n) {
	int k = 0; 
	for (int i = 0; i < n; i++)
		if (a[i] == 0) k++;
	return k;}


int zeros(double a[], int n) {
	int k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == 0) k++;
	return k;
}

int minArray(int a[], int size, int &minIndex) {
	int min = a[0];
	for (int i = 0; i < size; i++) {
		if(a[i]<=min)
		{
			min = a[i];			minIndex = i;		}
	}
	return min;
}

double minArray(double a[], int size, int &minIndex) {
	double min = a[0];
	for (int i = 0; i < size; i++) {
		if (a[i] <= min)
		{
			min = a[i];			minIndex = i;}
	}
	return min;
}


char minArray(char a[], int size, int &minIndex) {
	char min = a[0];
	for (int i = 0; i < size; i++) {
		if (a[i] <= min)
		{
			min = a[i];			minIndex = i;
		}
	}
	return min;
}

int main()
{
	srand(time(NULL));
	char c[10]; int minIndex;
	fillArray(c, 10);
	printArray(c, 10);
	cout << minArray(c, 10, minIndex);
	cout << minIndex << endl;
	system("pause");
	return 0;
}
