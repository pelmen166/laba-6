#include <iostream>
#include <time.h>

using namespace std;

void FillArray(int A[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		A[i] = -10 + rand() % (10 + 10 + 1);
	}
} // де SIZE - кількість елементів масива, A[] - масив
// функція заповнення масиву випадковими числами

void Print(int A[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << A[i] << ' ';
	}
	cout << endl;
}  // де SIZE - кількість елементів масива, A[] - масив
//функція виводу масиву на екран

int SumMas(int A[], int size) {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		temp += A[i];
	}
	return temp;
} // де size - кількість елементів масива, A[] - масив
//функція для обчислення суми елементів масиву

int main()
{
	srand(time(NULL));
	int size;
	cout << "Kilkist elementiv masuva: ";
	cin >> size;
	int* A = new int[size];
	FillArray(A, size);
	Print(A, size);
	cout << SumMas(A, size) << endl;
}